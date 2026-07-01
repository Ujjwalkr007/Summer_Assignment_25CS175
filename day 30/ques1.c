#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int display(struct Student s[], int n)
{
    int i;

    printf("\n---------------------------------\n");
    printf("Roll\tName\t\tMarks\n");
    printf("---------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}

int main()
{
    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    display(s, n);

    return 0;
}