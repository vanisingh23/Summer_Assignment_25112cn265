#include <stdio.h>

struct Account
{
    int accNo;
    char name[20];
    float balance;
};

int main()
{
    struct Account a[10];
    int n, i;
    int choice = 0;
    int accNo;
    int found;
    float amount;

    printf("Enter number of accounts: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nAccount %d\n", i + 1);

        printf("Enter Account Number: ");
        scanf("%d", &a[i].accNo);

        printf("Enter Account Holder Name: ");
        scanf("%s", a[i].name);

        printf("Enter Initial Balance: ");
        scanf("%f", &a[i].balance);
    }

    do
    {
        printf("\n\n----- Bank Account System -----");
        printf("\n1. Display All Accounts");
        printf("\n2. Search Account");
        printf("\n3. Deposit");
        printf("\n4. Withdraw");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nAccount Details\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nAccount No : %d", a[i].accNo);
                    printf("\nName       : %s", a[i].name);
                    printf("\nBalance    : %.2f\n", a[i].balance);
                }
                break;

            case 2:
                printf("\nEnter Account Number: ");
                scanf("%d", &accNo);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(a[i].accNo == accNo)
                    {
                        printf("\nAccount Found");
                        printf("\nAccount No : %d", a[i].accNo);
                        printf("\nName       : %s", a[i].name);
                        printf("\nBalance    : %.2f\n", a[i].balance);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("\nAccount Not Found");

                break;

            case 3:
                printf("\nEnter Account Number: ");
                scanf("%d", &accNo);

                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);

                for(i = 0; i < n; i++)
                {
                    if(a[i].accNo == accNo)
                    {
                        a[i].balance += amount;
                        printf("\nAmount Deposited Successfully");
                        printf("\nUpdated Balance: %.2f\n", a[i].balance);
                        break;
                    }
                }

                break;

            case 4:
                printf("\nEnter Account Number: ");
                scanf("%d", &accNo);

                printf("Enter Withdrawal Amount: ");
                scanf("%f", &amount);

                for(i = 0; i < n; i++)
                {
                    if(a[i].accNo == accNo)
                    {
                        if(amount <= a[i].balance)
                        {
                            a[i].balance -= amount;
                            printf("\nAmount Withdrawn Successfully");
                            printf("\nUpdated Balance: %.2f\n", a[i].balance);
                        }
                        else
                        {
                            printf("\nInsufficient Balance");
                        }
                        break;
                    }
                }

                break;

            case 5:
                printf("\nExiting Program...");
                break;

            default:
                printf("\nInvalid Choice");
        }

    } while(choice != 5);

    return 0;
}