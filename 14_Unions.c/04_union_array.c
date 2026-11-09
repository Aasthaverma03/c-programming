
#include <stdio.h>

union Data {
    int number;
    char name[20];
};

int main() {
    union Data d;

    snprintf(d.name, sizeof(d.name), "Aastha");

    printf("Name: %s\n", d.name);

    return 0;
}
