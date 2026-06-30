#include <stdio.h>
#include <string.h>

int stringOperation(char str[], int choice)
{
    int i, count = 0;

    switch(choice)
    {
        case 1:
            return strlen(str);

        case 2:
            for(i=0; str[i]!='\0'; i++)
            {
                if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
                   str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                    count++;
            }
            return count;

        case 3:
            strrev(str);
            printf("Reversed String = %s\n", str);
            break;
    }
    return 0;
}

int main()
{
    char str[100];
    int choice, result;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    do
    {
        printf("\n===== String Menu =====\n");
        printf("1. String Length\n");
        printf("2. Count Vowels\n");
        printf("3. Reverse String\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                result = stringOperation(str,1);
                printf("Length = %d\n", result);
                break;

            case 2:
                result = stringOperation(str,2);
                printf("Vowels = %d\n", result);
                break;

            case 3:
                stringOperation(str,3);
                break;
        }

    } while(choice != 4);

    return 0;
}