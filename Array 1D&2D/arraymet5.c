//5. Write a program in C to find the sum of the lower triangle of a matrix.


#include <stdio.h>

int main() {
	
    int n; 
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid matrix size. Please enter a positive integer.\n");
    }

    int matrix[n][n];
    int sum = 0,i,j;

    printf("Enter the elements of the matrix:\n");

    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i >= j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of the lower triangle elements: %d\n", sum);

    return 0;
}








