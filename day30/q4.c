#include <stdio.h>

int roomNo[50], booked[50], n = 0;
char customer[50][50];

void bookRoom() {
    printf("Enter Room Number: ");
    scanf("%d", &roomNo[n]);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customer[n]);

    booked[n] = 1;
    n++;

    printf("Room Booked Successfully.\n");
}

void displayRooms() {
    int i;

    if(n == 0) {
        printf("No Bookings Found.\n");
        return;
    }

    printf("\n--- Room Booking Details ---\n");

    for(i = 0; i < n; i++) {
        printf("\nRoom Number: %d", roomNo[i]);
        printf("\nCustomer Name: %s", customer[i]);

        if(booked[i] == 1)
            printf("\nStatus: Booked\n");
        else
            printf("\nStatus: Available\n");
    }
}

void searchRoom() {
    int i, room;

    printf("Enter Room Number to Search: ");
    scanf("%d", &room);

    for(i = 0; i < n; i++) {
        if(roomNo[i] == room) {
            printf("\nRoom Found");
            printf("\nRoom Number: %d", roomNo[i]);
            printf("\nCustomer Name: %s", customer[i]);

            if(booked[i] == 1)
                printf("\nStatus: Booked\n");
            else
                printf("\nStatus: Available\n");

            return;
        }
    }

    printf("Room Not Found.\n");
}

int main() {
    int choice;

    do {
        printf("\n----- Hotel Room Booking System -----");
        printf("\n1. Book Room");
        printf("\n2. Display Bookings");
        printf("\n3. Search Room");
        printf("\n4. Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                bookRoom();
                break;

            case 2:
                displayRooms();
                break;

            case 3:
                searchRoom();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 4);

    return 0;
}