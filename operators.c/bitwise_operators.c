#include <stdio.h>

int main()
{
    int a = 8, b = 9;

    printf("Bitwise Operators\n");

    // Bitwise AND
    printf("Bitwise AND (&) = %d\n", a & b);

    // Bitwise OR
    printf("Bitwise OR (|) = %d\n", a | b);

    // Bitwise XOR
    printf("Bitwise XOR (^) = %d\n", a ^ b);

    // Bitwise Left Shift
    printf("Left Shift (<<) = %d\n", a << 1);

    // Bitwise Right Shift
    printf("Right Shift (>>) = %d\n", a >> 1);

    return 0;
}