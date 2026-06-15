#include <stdio.h>

int main()
{
    int arr[100], n, i, j = 0;
    int temp[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }

    while(j < n)
    {
        temp[j] = 0;
        j++;
    }

    printf("Array after moving zeroes to end:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }

    return 0;
}