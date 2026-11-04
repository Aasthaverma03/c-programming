#include <stdio.h>

int main() {
    char str[100];
    char *ptr = str;
    int length = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("String length = %d", length);

    return 0;
}