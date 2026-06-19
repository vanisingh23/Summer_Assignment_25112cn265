#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int A[n][n];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Sum of principal diagonal elements
    for (int i = 0; i < n; i++) {
        sum += A[i][i];
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}