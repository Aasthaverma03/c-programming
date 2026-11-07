#include <stdio.h>

struct Bank
{
    int account_no;
    char name[30];
    float balance;
};

int main()
{
    struct Bank b;

    printf("Enter account number: ");
    scanf("%d", &b.account_no);

    printf("Enter name: ");
    scanf("%29s", b.name);

    printf("Enter balance: ");
    scanf("%f", &b.balance);

    printf("\nBank Account Details\n");
    printf("Account Number: %d\n", b.account_no);
    printf("Name: %s\n", b.name);
    printf("Balance: %.2f\n", b.balance);

    return 0;
}