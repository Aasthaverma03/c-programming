#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, digits = 0, spaces = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isdigit(str[i]))
            digits++;

        if (str[i] == ' ')
            spaces++;
    }

    printf("Digits = %d\n", digits);
    printf("Spaces = %d", spaces);

    return 0;
}