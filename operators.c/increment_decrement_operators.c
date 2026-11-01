#include <stdio.h>

int main()
{
    int a = 10;

    printf("Increment Operators\n");

    printf("Pre-Increment (++a) = %d\n", ++a);

    a = 10;
    printf("Post-Increment (a++) = %d\n", a++);
    printf("After Post-Increment = %d\n", a);

    printf("\nDecrement Operators\n");

    a = 10;
    printf("Pre-Decrement (--a) = %d\n", --a);

    a = 10;
    printf("Post-Decrement (a--) = %d\n", a--);
    printf("After Post-Decrement = %d\n", a);

    return 0;
}