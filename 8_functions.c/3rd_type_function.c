//Type 3: No Arguments but Return Value
#include <stdio.h>

int add()
{
    int a = 10, b = 20;
    return a + b;
}

int main()
{
    int result = add();
    printf("Sum = %d", result);
    return 0;
}