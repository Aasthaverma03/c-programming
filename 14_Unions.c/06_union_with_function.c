
#include <stdio.h>

union Data {
    int number;
    float value;
};

void display(union Data d) {
    printf("Number: %d\n", d.number);
}

int main() {
    union Data d;

    d.number = 100;

    display(d);

    return 0;
}
