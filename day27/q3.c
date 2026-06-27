#include <stdio.h>

struct Employee
{
    int id;
    char name[20];
    float basic, hra, da, gross;
};

int main()
{
    struct Employee e[10];
    int n, i;
    int choice = 0;
    int id;
    int found;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Enter Employee Name: ");
        scanf("%s", e[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f", &e[i].basic);

        e[i].hra = e[i].basic * 0.20;
        e[i].da = e[i].basic * 0.10;
        e[i].gross = e[i].basic + e[i].hra + e[i].da;
    }

    do
    {
        printf("\n\n----- Salary Management System -----");
        printf("\n1. Display Salary Details");
        printf("\n2. Search Employee by ID");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEmployee Salary Details\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nEmployee ID : %d", e[i].id);
                    printf("\nName        : %s", e[i].name);
                    printf("\nBasic       : %.2f", e[i].basic);
                    printf("\nHRA         : %.2f", e[i].hra);
                    printf("\nDA          : %.2f", e[i].da);
                    printf("\nGross Salary: %.2f\n", e[i].gross);
                }
                break;

            case 2:
                printf("\nEnter Employee ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(e[i].id == id)
                    {
                        printf("\nEmployee Found");
                        printf("\nEmployee ID : %d", e[i].id);
                        printf("\nName        : %s", e[i].name);
                        printf("\nBasic       : %.2f", e[i].basic);
                        printf("\nHRA         : %.2f", e[i].hra);
                        printf("\nDA          : %.2f", e[i].da);
                        printf("\nGross Salary: %.2f\n", e[i].gross);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("\nEmployee Not Found");
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