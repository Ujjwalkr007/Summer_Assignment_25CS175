#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== Quiz Application =====\n");

    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\n2. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
        score++;

    printf("\n3. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Guido van Rossum\n4. Bjarne Stroustrup\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\nYour Final Score = %d/3\n", score);

    if(score == 3)
        printf("Excellent!\n");
    else if(score == 2)
        printf("Good Job!\n");
    else
        printf("Better Luck Next Time!\n");

    return 0;
}