#include <stdio.h>

struct Student
{
    int roll;
    char name[20];
    int m1, m2, m3;
    int total;
    float percentage;
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

        printf("Enter Marks in Subject 1: ");
        scanf("%d", &s[i].m1);

        printf("Enter Marks in Subject 2: ");
        scanf("%d", &s[i].m2);

        printf("Enter Marks in Subject 3: ");
        scanf("%d", &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].percentage = s[i].total / 3.0;
    }

    do
    {
        printf("\n\n----- Marksheet Generation System -----");
        printf("\n1. Display Marksheet");
        printf("\n2. Search Student by Roll No");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nStudent Marksheet\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nRoll No    : %d", s[i].roll);
                    printf("\nName       : %s", s[i].name);
                    printf("\nSubject 1  : %d", s[i].m1);
                    printf("\nSubject 2  : %d", s[i].m2);
                    printf("\nSubject 3  : %d", s[i].m3);
                    printf("\nTotal      : %d", s[i].total);
                    printf("\nPercentage : %.2f%%\n", s[i].percentage);
                }
                break;

            case 2:
                printf("\nEnter Roll No: ");
                scanf("%d", &roll);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(s[i].roll == roll)
                    {
                        printf("\nStudent Found");
                        printf("\nRoll No    : %d", s[i].roll);
                        printf("\nName       : %s", s[i].name);
                        printf("\nSubject 1  : %d", s[i].m1);
                        printf("\nSubject 2  : %d", s[i].m2);
                        printf("\nSubject 3  : %d", s[i].m3);
                        printf("\nTotal      : %d", s[i].total);
                        printf("\nPercentage : %.2f%%\n", s[i].percentage);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("\nStudent Not Found");
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