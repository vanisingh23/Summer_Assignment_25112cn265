#include <stdio.h>

int main() {
    int n, i;
    char name[50][50];
    int roll[50];
    float marks[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name : %s\n", name[i]);
        printf("Roll : %d\n", roll[i]);
        printf("Marks: %.2f\n", marks[i]);
    }

    return 0;
}