#include <stdio.h>

struct Student
{
    char name[30];
    float marks;
};

int main()
{
    struct Student s;

    printf("Enter student name: ");
    scanf("%29s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nName: %s\n", s.name);

    if (s.marks >= 40)
        printf("Result: Pass\n");
    else
        printf("Result: Fail\n");

    return 0;
}