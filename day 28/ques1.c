#include <stdio.h>

int library(int n)
{
    int id[100];
    char name[100][50];
    int i;

    printf("Enter Book Details:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d ID: ", i + 1);
        scanf("%d", &id[i]);

        printf("Book %d Name: ", i + 1);
        scanf(" %[^\n]", name[i]);
    }

    printf("\n----- Library Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook ID : %d", id[i]);
        printf("\nBook Name : %s\n", name[i]);
    }

    return 0;
}

int main()
{
    int n;

    printf("Enter Number of Books: ");
    scanf("%d", &n);

    library(n);

    return 0;
}