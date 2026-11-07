#include <stdio.h>

struct Employee
{
    float basic, bonus, deduction;
};

int main()
{
    struct Employee e;

    printf("Enter basic salary: ");
    scanf("%f", &e.basic);

    printf("Enter bonus: ");
    scanf("%f", &e.bonus);

    printf("Enter deduction: ");
    scanf("%f", &e.deduction);

    float total = e.basic + e.bonus - e.deduction;

    printf("Total Salary: %.2f\n", total);

    return 0;
}