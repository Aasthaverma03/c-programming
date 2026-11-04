#include <stdio.h>

int main() {
    int a = 10, b = 25;
    int *p1 = &a, *p2 = &b;

    if (*p1 > *p2)
        printf("Largest = %d", *p1);
    else
        printf("Largest = %d", *p2);

    return 0;
}