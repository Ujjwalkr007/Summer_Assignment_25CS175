#include <stdio.h>

int bank(float balance)
{
    int choice;
    float amount;

    printf("\n1. Deposit");
    printf("\n2. Withdraw");
    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter Deposit Amount: ");
        scanf("%f", &amount);

        balance += amount;
    }
    else if(choice == 2)
    {
        printf("Enter Withdraw Amount: ");
        scanf("%f", &amount);

        if(amount <= balance)
            balance -= amount;
        else
            printf("Insufficient Balance!\n");
    }

    printf("Current Balance = %.2f\n", balance);

    return 0;
}

int main()
{
    float balance;

    printf("Enter Initial Balance: ");
    scanf("%f", &balance);

    bank(balance);

    return 0;
}