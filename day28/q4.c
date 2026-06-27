#include <stdio.h>

struct Contact
{
    int id;
    char name[30];
    char phone[15];
};

int main()
{
    struct Contact c[10];
    int n, i;
    int choice = 0;
    int id;
    int found;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nContact %d\n", i + 1);

        printf("Enter Contact ID: ");
        scanf("%d", &c[i].id);

        printf("Enter Name: ");
        scanf("%s", c[i].name);

        printf("Enter Phone Number: ");
        scanf("%s", c[i].phone);
    }

    do
    {
        printf("\n\n----- Contact Management System -----");
        printf("\n1. Display All Contacts");
        printf("\n2. Search Contact by ID");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nContact List\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nContact ID   : %d", c[i].id);
                    printf("\nName         : %s", c[i].name);
                    printf("\nPhone Number : %s\n", c[i].phone);
                }
                break;

            case 2:
                printf("\nEnter Contact ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(c[i].id == id)
                    {
                        printf("\nContact Found");
                        printf("\nContact ID   : %d", c[i].id);
                        printf("\nName         : %s", c[i].name);
                        printf("\nPhone Number : %s\n", c[i].phone);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("\nContact Not Found");
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