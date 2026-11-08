#include <stdio.h>

int sumCubes(int n)
{
    if (n == 0)
        return 0;

    int digit = n % 10;

    return digit * digit * digit + sumCubes(n / 10);
}

int main()
{
    int n;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    if (n == sumCubes(n))
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}