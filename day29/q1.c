#include <stdio.h>

int main()
{
    int choice;
    float a, b, result;

    do
    {
        printf("\n Menu-Driven Calculator");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch(choice)
        {
            case 1:
                result = a + b;
                printf("Result = %.2f\n", result);
                break;

            case 2:
                result = a - b;
                printf("Result = %.2f\n", result);
                break;

            case 3:
                result = a * b;
                printf("Result = %.2f\n", result);
                break;

            case 4:
                if(b != 0)
                {
                    result = a / b;
                    printf("Result = %.2f\n", result);
                }
                else
                {
                    printf("Division by zero is not possible.\n");
                }
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