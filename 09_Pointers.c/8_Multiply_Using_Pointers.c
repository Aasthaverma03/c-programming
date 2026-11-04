#include <stdio.h>

int main() {
    int a, b;
    int *p1 = &a, *p2 = &b;

    printf("Enter two numbers: ");
    scanf("%d %d", p1, p2);

    int result = (*p1) * (*p2);

    printf("Multiplication = %d", result);

    return 0;
}