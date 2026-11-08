#include <stdio.h>

int countDigits(int n)
{
    if (n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}

int main()
{
    int n, count;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
        count = 1;
    else
        count = countDigits(n);

    printf("Total digits = %d", count);

    return 0;
}