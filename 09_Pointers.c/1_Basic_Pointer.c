#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void *)&a);
    printf("Pointer value: %p\n", (void *)ptr);

    return 0;
}