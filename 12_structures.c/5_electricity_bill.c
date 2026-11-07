#include <stdio.h>

struct Electricity
{
    char name[30];
    int units;
    float rate;
};

int main()
{
    struct Electricity e;

    printf("Enter customer name: ");
    scanf("%29s", e.name);

    printf("Enter units consumed: ");
    scanf("%d", &e.units);

    printf("Enter rate per unit: ");
    scanf("%f", &e.rate);

    float bill = e.units * e.rate;

    printf("\nCustomer: %s\n", e.name);
    printf("Units: %d\n", e.units);
    printf("Electricity Bill: Rs. %.2f\n", bill);

    return 0;
}