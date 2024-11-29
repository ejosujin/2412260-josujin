#include <stdio.h>

struct student {
    int id;
    char name[50];
    double grade;
};

int main(void) {
    struct student s1 = {24, "josujin", 3.5};

    printf("id: %d\n", s1.id);
    printf("name: %s\n", s1.name);
    printf("grade: %.2f\n", s1.grade);

    return 0;
}
