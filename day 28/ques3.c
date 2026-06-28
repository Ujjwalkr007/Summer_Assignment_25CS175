#include <stdio.h>

int booking(int seats)
{
    int book;

    printf("Available Seats = %d\n", seats);

    printf("Enter Seats to Book: ");
    scanf("%d", &book);

    if(book <= seats)
    {
        seats -= book;
        printf("Booking Successful!\n");
    }
    else
    {
        printf("Seats Not Available!\n");
    }

    printf("Remaining Seats = %d\n", seats);

    return 0;
}

int main()
{
    int seats;

    printf("Enter Total Seats: ");
    scanf("%d", &seats);

    booking(seats);

    return 0;
}