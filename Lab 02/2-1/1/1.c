#include <stdio.h>

typedef struct {
    char name[21];
    int year;
} Book;

int main(void) {

    Book book[4];

    for(int i = 0; i < 4; i++) {
        scanf("%s", book[i].name);
        scanf("%d", &book[i].year);
    }

    for(int i = 0; i < 4; i++) {
        printf("Name: %s, ", book[i].name);
        printf("Published Year: %d\n", book[i].year);
    }

    return 0;
}
