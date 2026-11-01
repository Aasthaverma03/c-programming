#include <stdio.h>

int main()
{
    int choice;
    float c, f;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter Celsius: ");
            scanf("%f", &c);

            f = (c * 9 / 5) + 32;

            printf("Fahrenheit = %.2f", f);
            break;

        case 2:
            printf("Enter Fahrenheit: ");
            scanf("%f", &f);

            c = (f - 32) * 5 / 9;

            printf("Celsius = %.2f", c);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}