#include <stdio.h>
#include <stdlib.h>

struct point {
    int x;
    int y;
};

int getArea(struct point *pPtr1, struct point *pPtr2) {
    int width = abs(pPtr2->x - pPtr1->x);
    int height = abs(pPtr2->y - pPtr1->y);
    return width * height;
}

int main(void) {
    struct point p1, p2;
    int area;

    printf("Input the coordinate p1 (x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Input the coordinate p2 (x y): ");
    scanf("%d %d", &p2.x, &p2.y);

    area = getArea(&p1, &p2);

    printf("Area: %d\n", area);

    return 0;
}
