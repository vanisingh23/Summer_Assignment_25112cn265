#include <stdio.h>

int main() {
    int num, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1) {
        printf("Not a prime number");
    }
    else {
        for(i = 2; i < num; i++) {
            if(num % i == 0) {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("Prime number");
        else
            printf("Not a prime number");
    }

    return 0;
}

