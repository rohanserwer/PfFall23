#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    
    // Input the binary matrix
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    
    printf("Enter the elements of the matrix (0s and 1s):\n");
    int i,j,k;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int maxSize = 0, maxRow = 0, maxCol = 0;
    
    // Find the largest square submatrix of 1s
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] == 1) {
                int size = 1;
                int flag = 1;
                
                // Check the size of the square submatrix starting at (i, j)
                while (i + size < rows && j + size < cols && flag) {
                    for (k = i; k <= i + size; k++) {
                        if (matrix[k][j + size] == 0) {
                            flag = 0;
                            break;
                        }
                    }
                    for (k = j; k <= j + size; k++) {
                        if (matrix[i + size][k] == 0) {
                            flag = 0;
                            break;
                        }
                    }
                    if (flag) {
                        size++;
                    }
                }
                
                // Update the maximum size and coordinates if a larger submatrix is found
                if (size > maxSize) {
                    maxSize = size;
                    maxRow = i;
                    maxCol = j;
                }
            }
        }
    }
    
    // Display the largest square submatrix and its dimensions
    printf("Largest square submatrix of 1s:\n");
    for (i = maxRow; i < maxRow + maxSize; i++) {
        for (j = maxCol; j < maxCol + maxSize; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("Dimensions of the largest square submatrix: %d rows x %d columns\n", maxSize, maxSize);
    
    return 0;
}

