#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[50];

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%49s", str2);

    strcat(str1, str2);

    printf("Combined string: %s", str1);

    return 0;
}