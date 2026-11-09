
#include <stdio.h>

union Student {
    int roll;
    float marks;
};

int main() {
    union Student s = {101};

    printf("Roll Number: %d\n", s.roll);

    return 0;
}
