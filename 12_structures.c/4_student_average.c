#include <stdio.h>

struct Student
{
    char name[30];
    float m1, m2, m3;
};

int main()
{
    struct Student s;

    printf("Enter name: ");
    scanf("%29s", s.name);

    printf("Enter three subject marks: ");
    scanf("%f %f %f", &s.m1, &s.m2, &s.m3);

    float average = (s.m1 + s.m2 + s.m3) / 3;

    printf("Name: %s\n", s.name);
    printf("Average Marks: %.2f\n", average);

    return 0;
}