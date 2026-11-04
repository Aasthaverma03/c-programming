#include <stdio.h>

int main() {
    int arr[5], *ptr = arr;
    int even = 0, odd = 0, i;

    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
        scanf("%d", ptr + i);

    for (i = 0; i < 5; i++) {
        if (*(ptr + i) % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d", odd);

    return 0;
}