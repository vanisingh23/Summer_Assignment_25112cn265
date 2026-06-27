#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char name[20];
    int seats;
};

int main()
{
    struct Ticket t[10];
    int n, i;
    int choice = 0;
    int ticketNo;
    int found;

    printf("Enter number of bookings: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBooking %d\n", i + 1);

        printf("Enter Ticket Number: ");
        scanf("%d", &t[i].ticketNo);

        printf("Enter Passenger Name: ");
        scanf("%s", t[i].name);

        printf("Enter Number of Seats: ");
        scanf("%d", &t[i].seats);
    }

    do
    {
        printf("\n\n----- Ticket Booking System -----");
        printf("\n1. Display All Bookings");
        printf("\n2. Search Booking");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nBooking Details\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nTicket Number : %d", t[i].ticketNo);
                    printf("\nPassenger Name: %s", t[i].name);
                    printf("\nSeats Booked  : %d\n", t[i].seats);
                }
                break;

            case 2:
                printf("\nEnter Ticket Number: ");
                scanf("%d", &ticketNo);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(t[i].ticketNo == ticketNo)
                    {
                        printf("\nBooking Found");
                        printf("\nTicket Number : %d", t[i].ticketNo);
                        printf("\nPassenger Name: %s", t[i].name);
                        printf("\nSeats Booked  : %d\n", t[i].seats);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("\nBooking Not Found");
                }

                break;

            case 3:
                printf("\nExiting Program...");
                break;

            default:
                printf("\nInvalid Choice");
        }

    } while(choice != 3);

    return 0;
}