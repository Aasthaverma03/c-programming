#include <stdio.h>

struct Product
{
    int id;
    char name[30];
    float price;
    int quantity;
};

int main()
{
    struct Product p = {101, "Laptop", 50000, 2};

    printf("Product ID: %d\n", p.id);
    printf("Product Name: %s\n", p.name);
    printf("Price: %.2f\n", p.price);
    printf("Quantity: %d\n", p.quantity);
    printf("Total Cost: %.2f\n", p.price * p.quantity);

    return 0;
}