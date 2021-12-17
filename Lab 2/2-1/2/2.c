#include <stdio.h>
using namespace std;

typedef struct {
    int xpos;
    int ypos;
} Point;

Point getScale2xPoint(const Point* P) {
    Point np;
    
    np.xpos = P->xpos * 2;
    np.ypos = P->ypos * 2;

    printf("%d %d\n", np.xpos, np.ypos);

    return np;
}

void swapPoints(Point* p1, Point* p2) {

    Point tmp;

    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int main(void) {

    Point n1, n2;
    Point *p1 = &n1;
    Point *p2 = &n2;

    scanf("%d %d", &n1.xpos, &n1.ypos);
    scanf("%d %d", &n2.xpos, &n2.ypos);

    printf("Calling getScale2xPoint()\n");
    printf("P1 : ");
    n1 = getScale2xPoint(p1);
    printf("P2 : ");
    n2 = getScale2xPoint(p2);

    printf("Calling swapPoint()\n");
    swapPoints(p1, p2);
    printf("P1 : %d %d\n", p1->xpos, p1->ypos);
    printf("P2 : %d %d\n", p2->xpos, p2->ypos);

    return 0;
}

