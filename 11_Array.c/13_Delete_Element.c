#include <stdio.h>

int main()
{
    int arr[10], n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 10)
        return 1;

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n)
    {
        printf("Invalid position");
        return 1;
    }

    for (i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    printf("Updated array:\n");

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}