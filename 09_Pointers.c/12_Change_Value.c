#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;

    *ptr = 50;

    printf("Updated value = %d", a);

    return 0;
}