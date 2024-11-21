#include <stdio.h>

int main(void) {
    char word1[50], word2[50], word3[50];
    FILE *fp;

    printf("input a word: ");
    scanf("%s", word1);
    printf("input a word: ");
    scanf("%s", word2);
    printf("input a word: ");
    scanf("%s", word3);

    fp = fopen("sample.txt", "w");
    if (fp == NULL) {
        return 1;
    }

    fprintf(fp, "%s\n%s\n%s\n", word1, word2, word3);

    fclose(fp);

    return 0;
}
