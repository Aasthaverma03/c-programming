#include <stdio.h>

int main() {
    int a = 5;
    int *ptr = &a;

    printf("Square = %d", (*ptr) * (*ptr));

    return 0;
}