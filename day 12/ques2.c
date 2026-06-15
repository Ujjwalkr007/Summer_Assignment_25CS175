#include <stdio.h>

int armstrong(int n)
{
    int original = n, sum = 0, digit;

    while (n > 0)
    {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    return (original == sum);
}

int main()
{
    int num;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}