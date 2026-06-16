#include <stdio.h>

int main() {
    int arr[100], n, i;
    int expectedSum = 0, actualSum = 0, missing;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    expectedSum = n * (n + 1) / 2;
    missing = expectedSum - actualSum;

    printf("Missing number = %d", missing);

    return 0;
}