#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

	int i;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

void fillWithPrimes(int **matrix, int rows, int cols) {
    int num = 2; // Start with the first prime number

    int i,j;
	for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            while (!isPrime(num)) {
                num++;
            }

            matrix[i][j] = num;
            num++;
        }
    }
}

void printMatrix(int **matrix, int rows, int cols) {
    int i,j;
	for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int **matrix = (int **)malloc(rows * sizeof(int *));
    int i;
	for (i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    fillWithPrimes(matrix, rows, cols);

    printf("Matrix filled with consecutive prime numbers:\n");
    printMatrix(matrix, rows, cols);

    // Free allocated memory
    for (i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

