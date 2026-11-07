#include <stdio.h>

struct Book
{
    int id;
    char title[30];
    float price;
};

int main()
{
    struct Book b[2];
    int i;

    for (i = 0; i < 2; i++)
    {
        printf("Enter book ID, title and price: ");
        scanf("%d %29s %f",
              &b[i].id, b[i].title, &b[i].price);
    }

    printf("\nBook Records:\n");

    for (i = 0; i < 2; i++)
    {
        printf("%d %s %.2f\n",
               b[i].id, b[i].title, b[i].price);
    }

    return 0;
}