#include <stdio.h>

void main(void)
{
    FILE *fp = NULL;
    char str[100];

    fp = fopen("sample.txt", "r");
    if (fp == NULL)
    {
        printf("FILE OPEN FAIL\n");
    }

    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    fclose(fp);
}
