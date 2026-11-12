#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    fp = fopen("name.txt", "w");

    if (fp == NULL)
        return 1;

    fprintf(fp, "%s", name);

    fclose(fp);

    printf("Name saved successfully.");

    return 0;
}