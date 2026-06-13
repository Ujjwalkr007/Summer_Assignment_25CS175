#include <stdio.h>
int maximum(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;

}
int main()
{
    int num1, num2;

    printf("enter two no:");
    scanf("%d" "%d", &num1, &num2);

    printf("Maximum = %d", maximum(num1,num2));

    return 0;

}