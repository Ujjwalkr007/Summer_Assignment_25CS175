#include <stdio.h>

int palindrome(int n)
{
    int original = n, rev = 0, digit;

    while (n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return (original == rev);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (palindrome(num))
        printf("%d is a palindrome number.", num);
    else
        printf("%d is not a palindrome number.", num);

    return 0;
}