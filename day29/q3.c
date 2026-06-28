#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int choice, i, len;

    printf("Enter a string: ");
    scanf("%s", str);

    do
    {
        printf("\n----- Menu-Driven String Operations -----");
        printf("\n1. Find Length");
        printf("\n2. Reverse String");
        printf("\n3. Convert to Uppercase");
        printf("\n4. Convert to Lowercase");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2:
                len = strlen(str);

                for(i = 0; i < len; i++)
                {
                    rev[i] = str[len - i - 1];
                }

                rev[len] = '\0';

                printf("Reversed String = %s\n", rev);
                break;

            case 3:
                for(i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }

                printf("Uppercase String = %s\n", str);
                break;

            case 4:
                for(i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] >= 'A' && str[i] <= 'Z')
                        str[i] = str[i] + 32;
                }

                printf("Lowercase String = %s\n", str);
                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 5);

    return 0;
}