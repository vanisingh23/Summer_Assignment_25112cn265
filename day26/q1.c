#include <stdio.h>

int main() {
    int secret = 7, guess;

    do {
        printf("Guess the number (1-10): ");
        scanf("%d", &guess);

        if (guess > secret)
            printf("Too high!\n");
        else if (guess < secret)
            printf("Too low!\n");
        else
            printf("Correct! You guessed it.\n");

    } while (guess != secret);

    return 0;
}