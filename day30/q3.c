#include <stdio.h>

int main() {
    int n, i;
    int id[50];
    char name[50][50];
    float salary[50];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &id[i]);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    printf("\n----- Employee Records -----\n");

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: %d\n", id[i]);
        printf("Name: %s\n", name[i]);
        printf("Salary: %.2f\n", salary[i]);
    }

    return 0;
}