#include <stdio.h>

int arrayOperation(int arr[], int n, int choice)
{
    int i, sum = 0, max, min;

    switch(choice)
    {
        case 1:
            printf("Array Elements: ");
            for(i=0;i<n;i++)
                printf("%d ", arr[i]);
            break;

        case 2:
            for(i=0;i<n;i++)
                sum += arr[i];
            return sum;

        case 3:
            max = arr[0];
            for(i=1;i<n;i++)
                if(arr[i] > max)
                    max = arr[i];
            return max;

        case 4:
            min = arr[0];
            for(i=1;i<n;i++)
                if(arr[i] < min)
                    min = arr[i];
            return min;
    }
    return 0;
}

int main()
{
    int arr[100], n, choice, result, i;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    do
    {
        printf("\n===== Array Menu =====\n");
        printf("1. Display Array\n");
        printf("2. Sum\n");
        printf("3. Maximum\n");
        printf("4. Minimum\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                arrayOperation(arr,n,1);
                break;

            case 2:
                result = arrayOperation(arr,n,2);
                printf("Sum = %d\n", result);
                break;

            case 3:
                result = arrayOperation(arr,n,3);
                printf("Maximum = %d\n", result);
                break;

            case 4:
                result = arrayOperation(arr,n,4);
                printf("Minimum = %d\n", result);
                break;
        }

    } while(choice != 5);

    return 0;
}