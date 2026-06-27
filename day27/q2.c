#include <stdio.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
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

        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);
    }

    do
    {
        printf("\n\n----- Employee Management System -----");
        printf("\n1. Display All Employees");
        printf("\n2. Search Employee by ID");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEmployee Records\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nEmployee ID : %d", e[i].id);
                    printf("\nName        : %s", e[i].name);
                    printf("\nSalary      : %.2f\n", e[i].salary);
                }
                break;

            case 2:
                printf("\nEnter Employee ID to Search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(e[i].id == id)
                    {
                        printf("\nEmployee Found");
                        printf("\nEmployee ID : %d", e[i].id);
                        printf("\nName        : %s", e[i].name);
                        printf("\nSalary      : %.2f\n", e[i].salary);
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