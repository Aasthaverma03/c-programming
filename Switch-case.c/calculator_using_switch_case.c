#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            printf("Addition = %d", a + b);
            break;

        case '-':
            printf("Subtraction = %d", a - b);
            break;

        case '*':
            printf("Multiplication = %d", a * b);
            break;

        case '/':
            if(b != 0)
                printf("Division = %.2f", (float)a / b);
            else
                printf("Division by zero is not possible");
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}