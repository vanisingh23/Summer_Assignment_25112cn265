#include <stdio.h>

int main() {
    char title[50][50];
    int id[50];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &id[i]);

        printf("Enter Book Title: ");
        scanf(" %[^\n]", title[i]);
    }

    printf("\n----- Library Records -----\n");

    for(i = 0; i < n; i++) {
        printf("Book ID: %d\n", id[i]);
        printf("Title: %s\n\n", title[i]);
    }

    return 0;
}