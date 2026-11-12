#include <stdio.h>

int main()
{
    FILE *fp;
    int a = 10, b = 20;

    fp = fopen("number.txt", "w");

    if (fp == NULL)
        return 1;

    fprintf(fp, "%d %d", a, b);

    fclose(fp);

    printf("Numbers saved successfully.");

    return 0;
}