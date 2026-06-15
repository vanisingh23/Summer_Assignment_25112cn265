#include <stdio.h>

int main()
{
    int arr[100], n, i, key;
    int frequency = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element whose frequency is to be found: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            frequency++;
        }
    }

    printf("Frequency of %d = %d", key, frequency);

    return 0;
}