#include <stdio.h>

int main()
{
    int a = 10, b = 5;

    printf("Logical Operators\n");

    printf("Logical AND (&&) = %d\n", (a > 5 && b < 10));

    printf("Logical OR (||) = %d\n", (a < 5 || b < 10));

    printf("Logical NOT (!) = %d\n", !(a > 5));

    return 0;
}

/*
//Logical AND (&&): Both conditions must be true.
a > 5 → True
b < 10 → True
Result = 1

//Logical OR (||): At least one condition must be true.
a < 5 → False
b < 10 → True
Result = 1

//Logical NOT (!): Reverses the condition.
- a > 5 → True
- !(a > 5) → False
- Result = 0
*/