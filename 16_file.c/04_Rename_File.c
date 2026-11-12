#include <stdio.h>

int main()
{
    if (rename("old.txt", "new.txt") == 0)
    {
        printf("File renamed successfully.");
    }
    else
    {
        printf("Unable to rename file.");
    }

    return 0;
}