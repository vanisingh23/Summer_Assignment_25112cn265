#include <stdio.h>

int isPalindrome(int n)
{
    int original = n, reverse = 0, rem;

    while(n > 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    if(original == reverse)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPalindrome(num))
        printf("%d is a Palindrome Number", num);
    else
        printf("%d is Not a Palindrome Number", num);

    return 0;
}