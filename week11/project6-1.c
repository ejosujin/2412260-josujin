#include <stdio.h>

void main(void)
{
    FILE *fp = NULL;
    char c;

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("FILE OPEN FAIL\n");
    }

    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);
}
