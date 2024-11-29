#include <stdio.h>
#define STUDENTNUM 4

struct student {
    int id;
    int score;
};

void main(void) {
    struct student s[STUDENTNUM];
    int total = 0, highestScore = 0, highestIndex = 0;

    for (int i = 0; i < STUDENTNUM; i++) {
        printf("Input the ID: ");
        scanf("%d", &s[i].id);
        printf("Input the score: ");
        scanf("%d", &s[i].score);

        total += s[i].score;
        if (s[i].score > highestScore) {
            highestScore = s[i].score;
            highestIndex = i;
        }
    }

    printf("The average score: %.2f\n", (float)total / STUDENTNUM);
    printf("The highest score - ID: %d, score: %d\n", s[highestIndex].id, s[highestIndex].score);

}
