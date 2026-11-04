#include <stdio.h>

int main() {
    int arr[5], *ptr = arr;
    int i, temp;

    printf("Enter 5 elements: ");
    for (i = 0; i < 5; i++)
        scanf("%d", ptr + i);

    for (i = 0; i < 2; i++) {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + 4 - i);
        *(ptr + 4 - i) = temp;
    }

    printf("Reversed array: ");
    for (i = 0; i < 5; i++)
        printf("%d ", *(ptr + i));

    return 0;
}