#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("data.txt", "w");

    fprintf(fp, "Hello Students\n");
    fprintf(fp, "Welcome to C Programming\n");
    fprintf(fp, "Learn File Handling");

    fclose(fp);

    printf("Data written successfully.");

    return 0;
}