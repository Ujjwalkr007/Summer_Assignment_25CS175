#include <stdio.h>

float calculate(int choice, float a, float b)
{
    switch(choice)
    {
        case 1: return a + b;
        case 2: return a - b;
        case 3: return a * b;
        case 4:
            if(b != 0)
                return a / b;
            else
            {
                printf("Division by zero not possible!\n");
                return 0;
            }
        default:
            printf("Invalid Choice!\n");
            return 0;
    }
}

int main()
{
    int choice;
    float a, b, result;

    do
    {
        printf("\n===== Calculator =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%f", &a, &b);

            result = calculate(choice, a, b);
            printf("Result = %.2f\n", result);
        }

    } while(choice != 5);

    return 0;
}