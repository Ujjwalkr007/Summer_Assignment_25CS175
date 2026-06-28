#include <stdio.h>

int contact(int n)
{
    char name[100][50];
    char phone[100][15];
    int i;

    printf("Enter Contact Details:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nContact %d Name: ", i + 1);
        scanf(" %[^\n]", name[i]);

        printf("Phone Number: ");
        scanf("%s", phone[i]);
    }

    printf("\n------ Contact List ------\n");

    for(i = 0; i < n; i++)
    {
        printf("\nName : %s", name[i]);
        printf("\nPhone: %s\n", phone[i]);
    }

    return 0;
}

int main()
{
    int n;

    printf("Enter Number of Contacts: ");
    scanf("%d", &n);

    contact(n);

    return 0;
}