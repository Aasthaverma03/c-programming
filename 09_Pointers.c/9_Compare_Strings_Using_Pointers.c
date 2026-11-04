#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    char *p1 = str1, *p2 = str2;

    printf("Enter first string: ");
    scanf("%49s", p1);

    printf("Enter second string: ");
    scanf("%49s", p2);

    if (strcmp(p1, p2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are different");

    return 0;
}