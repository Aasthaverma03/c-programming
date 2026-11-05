#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int i, found = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Character found at position %d", i + 1);
    else
        printf("Character not found");

    return 0;
}