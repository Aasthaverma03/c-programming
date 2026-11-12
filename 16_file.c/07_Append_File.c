#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("student.txt", "a");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    fprintf(fp, "\nLearning File Handling in C.");

    fclose(fp);

    printf("Data appended successfully.");

    return 0;
}