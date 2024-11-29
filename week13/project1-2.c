#include <stdio.h>
#include <string.h> 

struct student {
    int id;
    char name[50];
    double grade;
};

void main(void) {
    struct student s1 = {24, "josujin", 3.5};

    s1.id = 24;
    strcpy(s1.name, "Eunju");
    s1.grade = 4.2;

    printf("id: %d\n", s1.id);
    printf("name: %s\n", s1.name);
    printf("grade: %.6f\n", s1.grade);
}
