#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int m1, m2, m3, total;
    float percentage;
};

int main()
{
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks of Subject 1: ");
    scanf("%d", &s.m1);

    printf("Enter Marks of Subject 2: ");
    scanf("%d", &s.m2);

    printf("Enter Marks of Subject 3: ");
    scanf("%d", &s.m3);

    s.total = s.m1 + s.m2 + s.m3;
    s.percentage = s.total / 3.0;

    printf("\n------ Marksheet ------\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("Subject 1   : %d\n", s.m1);
    printf("Subject 2   : %d\n", s.m2);
    printf("Subject 3   : %d\n", s.m3);
    printf("Total Marks : %d\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);

    if (s.percentage >= 40)
        printf("Result      : PASS\n");
    else
        printf("Result      : FAIL\n");

    return 0;
}