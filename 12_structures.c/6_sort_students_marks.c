#include <stdio.h>

struct Student
{
    char name[20];
    int marks;
};

int main()
{
    struct Student s[3] = {
        {"Rahul", 75},
        {"Aman", 90},
        {"Priya", 85}
    };

    struct Student temp;
    int i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (s[i].marks < s[j].marks)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("Students sorted by marks:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%s - %d\n", s[i].name, s[i].marks);
    }

    return 0;
}