#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Taking input for the number of rows and columns in the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // Taking input for the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
/*
  1 2 3
  2 4 5	
  3 5 6
*/

    // Checking if the matrix is symmetric
    int isSymmetric = 1; // Assume the matrix is symmetric initially

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            // Checking if Aij is equal to Aji for all elements
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Set to 0 if not symmetric
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    // Printing the result based on symmetry
    if (isSymmetric) {
        printf("Array is Symmetric:\n");
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Array is not Symmetric.\n");
    }

    return 0;
}

