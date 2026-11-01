#include <stdio.h>

int main()
{
    int a = 10, b = 5;

    // Arithmetic Operators
    printf("Arithmetic Operators\n");

    printf("Addition (+) = %d\n", a + b);
    printf("Subtraction (-) = %d\n", a - b);
    printf("Multiplication (*) = %d\n", a * b);
    printf("Division (/) = %d\n", a / b);
    printf("Modulus (%%) = %d\n", a % b);

    // Assignment Operators
    printf("\nAssignment Operators\n");

    a = 10;
    printf("Assignment (=) = %d\n", a);

    a += 5;
    printf("Addition Assignment (+=) = %d\n", a);

    a -= 3;
    printf("Subtraction Assignment (-=) = %d\n", a);

    a *= 2;
    printf("Multiplication Assignment (*=) = %d\n", a);

    a /= 4;
    printf("Division Assignment (/=) = %d\n", a);

    a %= 3;
    printf("Modulus Assignment (%%=) = %d\n", a);

    return 0;
}