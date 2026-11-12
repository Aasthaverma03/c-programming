#include <stdio.h>

int main()
{
    if (remove("data.txt") == 0)
    {
        printf("File deleted successfully.");
    }
    else
    {
        printf("Unable to delete file.");
    }

    return 0;
}