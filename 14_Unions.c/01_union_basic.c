
#include <stdio.h>

union Data {
    int number;
    float value;
};

int main() {
    union Data d;

    d.number = 10;
    printf("Number: %d\n", d.number);

    d.value = 20.5;
    printf("Value: %.2f\n", d.value);

    return 0;
}
