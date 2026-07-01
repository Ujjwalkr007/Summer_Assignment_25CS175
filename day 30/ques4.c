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

    if(n == 0)
    {
        printf("No Records Found!\n");
        return 0;
    }

    printf("\n---------------------------------\n");
    printf("Roll\tName\t\tMarks\n");
    printf("---------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}

int search(struct Student s[], int n, int roll)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nStudent Found\n");
            printf("Roll : %d\n", s[i].roll);
            printf("Name : %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            return 1;
        }
    }

    printf("Student Not Found!\n");
    return 0;
}

int main()
{
    struct Student s[100];
    int choice, n = 0, roll;

    do
    {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[n].roll);

                printf("Enter Name: ");
                scanf("%s", s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Student Added Successfully!\n");
                break;

            case 2:
                display(s, n);
                break;

            case 3:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);

                search(s, n, roll);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}