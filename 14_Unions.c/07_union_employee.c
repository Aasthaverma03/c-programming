
#include <stdio.h>

union Payment {
    int monthly_salary;
    float hourly_rate;
};

int main() {
    union Payment p;

    p.monthly_salary = 30000;

    printf("Monthly Salary: %d\n",
           p.monthly_salary);

    p.hourly_rate = 250.5;

    printf("Hourly Rate: %.2f\n",
           p.hourly_rate);

    return 0;
}
