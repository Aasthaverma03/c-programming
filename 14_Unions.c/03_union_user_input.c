
#include <stdio.h>

union Data {
    int number;
    float value;
};

int main() {
    union Data d;

    printf("Enter an integer: ");
    scanf("%d", &d.number);

    printf("Integer: %d\n", d.number);

    printf("Enter a float: ");
    scanf("%f", &d.value);

    printf("Float: %.2f\n", d.value);

    return 0;
}
