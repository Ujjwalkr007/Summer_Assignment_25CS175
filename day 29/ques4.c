#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int display(struct Item item[], int n)
{
    int i;

    printf("\n-------------------------------\n");
    printf("ID\tName\tQty\tPrice\n");
    printf("-------------------------------\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\t%.2f\n",
               item[i].id,
               item[i].name,
               item[i].quantity,
               item[i].price);
    }

    return 0;
}

int main()
{
    struct Item item[100];
    int n=0, choice, i;

    do
    {
        printf("\n===== Inventory System =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Item ID: ");
                scanf("%d",&item[n].id);

                printf("Enter Item Name: ");
                scanf("%s",item[n].name);

                printf("Enter Quantity: ");
                scanf("%d",&item[n].quantity);

                printf("Enter Price: ");
                scanf("%f",&item[n].price);

                n++;
                printf("Item Added Successfully!\n");
                break;

            case 2:
                if(n==0)
                    printf("No items available.\n");
                else
                    display(item,n);
                break;
        }

    } while(choice != 3);

    return 0;
}