#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int display(struct Employee e[], int n)
{
    int i;

    printf("\n---------------------------------\n");
    printf("ID\tName\t\tSalary\n");
    printf("---------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%.2f\n", e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}

int main()
{
    struct Employee e[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Enter Name: ");
        scanf("%s", e[i].name);

        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);
    }

    display(e, n);

    return 0;
}