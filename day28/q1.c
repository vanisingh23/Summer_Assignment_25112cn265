#include <stdio.h>

struct Book
{
    int id;
    char name[30];
    char author[30];
};

int main()
{
    struct Book b[10];
    int n, i;
    int choice = 0;
    int id;
    int found;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Name: ");
        scanf("%s", b[i].name);

        printf("Enter Author Name: ");
        scanf("%s", b[i].author);
    }

    do
    {
        printf("\n\n----- Library Management System -----");
        printf("\n1. Display All Books");
        printf("\n2. Search Book by ID");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nBook Records\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nBook ID     : %d", b[i].id);
                    printf("\nBook Name   : %s", b[i].name);
                    printf("\nAuthor Name : %s\n", b[i].author);
                }
                break;

            case 2:
                printf("\nEnter Book ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        printf("\nBook Found");
                        printf("\nBook ID     : %d", b[i].id);
                        printf("\nBook Name   : %s", b[i].name);
                        printf("\nAuthor Name : %s\n", b[i].author);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("\nBook Not Found");
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