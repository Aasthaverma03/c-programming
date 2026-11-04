#include <stdio.h>

int main() {
    int a, b, c;
    int *p1 = &a, *p2 = &b, *p3 = &c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", p1, p2, p3);

    int largest = *p1;

    if (*p2 > largest)
        largest = *p2;

    if (*p3 > largest)
        largest = *p3;

    printf("Largest = %d", largest);

    return 0;
}