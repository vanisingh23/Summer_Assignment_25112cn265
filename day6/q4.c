#include <stdio.h>

int main()
{
    int x, n, result = 1, i;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        result = result * x;
    }

    printf("%d^%d = %d", x, n, result);

    return 0;
}