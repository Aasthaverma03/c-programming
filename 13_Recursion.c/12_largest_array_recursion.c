#include <stdio.h>

int largest(int a[], int n)
{
    if (n == 1)
        return a[0];

    int max = largest(a, n - 1);

    if (a[n - 1] > max)
        return a[n - 1];

    return max;
}

int main()
{
    int a[5] = {10, 25, 7, 40, 15};

    printf("Largest element = %d", largest(a, 5));

    return 0;
}