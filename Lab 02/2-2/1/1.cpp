#include <iostream>
using namespace std;

typedef struct {
    double x;
    double y;
} Point;

typedef struct {
    char name[7];
    Point points[3];
} Person;

int main(void) {

    Person p1, p2, p3;

    cin >> p1.name;
    for(int i = 0; i < 3; i++) {
        cin >> p1.points[i].x >> p1.points[i].y;
    }

    cin >> p2.name;
    for(int i = 0; i < 3; i++) {
        cin >> p2.points[i].x >> p2.points[i].y;
    }

    cin >> p3.name;
    for(int i = 0; i < 3; i++) {
        cin >> p3.points[i].x >> p3.points[i].y;
    }

    cout << p1.name << " ";
    for(int i = 0; i < 3; i++) {
        cout << "(" << p1.points[i].x << " " << p1.points[i].y << ") ";
    }
    cout << endl;

    cout << p2.name << " ";
    for(int i = 0; i < 3; i++) {
        cout << "(" << p2.points[i].x << " " << p2.points[i].y << ") ";
    }
    cout << endl;

    cout << p3.name << " ";
    for(int i = 0; i < 3; i++) {
        cout << "(" << p3.points[i].x << " " << p3.points[i].y << ") ";
    }
    cout << endl;

    return 0;
}
