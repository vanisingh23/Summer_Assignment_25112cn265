#include <stdio.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct Student s[10];
    int n, i;
    int choice = 0;
    int roll;
    int found;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    do
    {
        printf("\n\n----- Student Record Management System -----");
        printf("\n1. Display All Records");
        printf("\n2. Search by Roll Number");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nStudent Records\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nRoll No : %d", s[i].roll);
                    printf("\nName    : %s", s[i].name);
                    printf("\nMarks   : %.2f\n", s[i].marks);
                }
                break;

            case 2:
                printf("\nEnter Roll Number to Search: ");
                scanf("%d", &roll);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(s[i].roll == roll)
                    {
                        printf("\nRecord Found");
                        printf("\nRoll No : %d", s[i].roll);
                        printf("\nName    : %s", s[i].name);
                        printf("\nMarks   : %.2f\n", s[i].marks);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("\nRecord Not Found");
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