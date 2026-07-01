#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
};

int display(struct Book b[], int n)
{
    int i;

    printf("\n---------------------------------------\n");
    printf("ID\tTitle\t\tAuthor\n");
    printf("---------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%s\n", b[i].id, b[i].title, b[i].author);
    }

    return 0;
}

int main()
{
    struct Book b[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Title: ");
        scanf("%s", b[i].title);

        printf("Enter Author Name: ");
        scanf("%s", b[i].author);
    }

    display(b, n);

    return 0;
}