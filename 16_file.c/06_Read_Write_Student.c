#include <stdio.h>

int main()
{
    FILE *fp;
    char name[30];
    int age;

    fp = fopen("data.txt", "w");

    if (fp == NULL)
        return 1;

    fprintf(fp, "Rahul 20");
    fclose(fp);

    fp = fopen("data.txt", "r");

    if (fp == NULL)
        return 1;

    fscanf(fp, "%29s %d", name, &age);

    printf("Name: %s\n", name);
    printf("Age: %d", age);

    fclose(fp);

    return 0;
}