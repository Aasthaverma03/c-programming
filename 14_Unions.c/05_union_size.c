
#include <stdio.h>

union Data {
    int number;
    float value;
    char letter;
};

int main() {
    union Data d;

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of union: %zu bytes\n", sizeof(d));

    return 0;
}
