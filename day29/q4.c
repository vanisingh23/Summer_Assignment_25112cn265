#include <stdio.h>

struct Item
{
    int id;
    char name[30];
    int quantity;
    float price;
};

int main()
{
    struct Item item[10];
    int n, i;
    int choice = 0;
    int id;
    int found;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nItem %d\n", i + 1);

        printf("Enter Item ID: ");
        scanf("%d", &item[i].id);

        printf("Enter Item Name: ");
        scanf("%s", item[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &item[i].quantity);

        printf("Enter Price: ");
        scanf("%f", &item[i].price);
    }

    do
    {
        printf("\n\n----- Inventory Management System -----");
        printf("\n1. Display All Items");
        printf("\n2. Search Item by ID");
        printf("\n3. Update Quantity");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nInventory Details\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nItem ID  : %d", item[i].id);
                    printf("\nName     : %s", item[i].name);
                    printf("\nQuantity : %d", item[i].quantity);
                    printf("\nPrice    : %.2f\n", item[i].price);
                }
                break;

            case 2:
                printf("\nEnter Item ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(item[i].id == id)
                    {
                        printf("\nItem Found");
                        printf("\nItem ID  : %d", item[i].id);
                        printf("\nName     : %s", item[i].name);
                        printf("\nQuantity : %d", item[i].quantity);
                        printf("\nPrice    : %.2f\n", item[i].price);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("\nItem Not Found");
                }

                break;

            case 3:
                printf("\nEnter Item ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(item[i].id == id)
                    {
                        printf("Enter New Quantity: ");
                        scanf("%d", &item[i].quantity);

                        printf("Quantity Updated Successfully");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("\nItem Not Found");
                }

                break;

            case 4:
                printf("\nExiting Program...");
                break;

            default:
                printf("\nInvalid Choice");
        }

    } while(choice != 4);

    return 0;
}