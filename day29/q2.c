#include <stdio.h>

int main()
{
    int a[100], n, i;
    int choice;
    int sum = 0, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("\n----- Menu-Driven Array Operations -----");
        printf("\n1. Display Array");
        printf("\n2. Sum of Elements");
        printf("\n3. Find Maximum");
        printf("\n4. Find Minimum");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nArray Elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                {
                    sum += a[i];
                }
                printf("Sum = %d\n", sum);
                break;

            case 3:
                max = a[0];
                for(i = 1; i < n; i++)
                {
                    if(a[i] > max)
                        max = a[i];
                }
                printf("Maximum = %d\n", max);
                break;

            case 4:
                min = a[0];
                for(i = 1; i < n; i++)
                {
                    if(a[i] < min)
                        min = a[i];
                }
                printf("Minimum = %d\n", min);
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