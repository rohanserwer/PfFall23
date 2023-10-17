/*
Programmer: Rohan Serwer
Desc: largest value in every contiguous 3x3 matrix in the grid.
Date: 10-Oct-2023

*/
#include <stdio.h>

void generateMaxLocal(int grid[100][100], int n) {
    int maxLocal[100][100];

	// Iterate over the grid matrix to generate maxLocal
	int i,j,x,y;
    for (i = 1; i < n - 1; i++) {
        for (j = 1; j < n - 1; j++) {
            int maxVal = grid[i][j];
            for (x = -1; x <= 1; x++) {
                for (y = -1; y <= 1; y++) {
                    if (grid[i + x][j + y] > maxVal) {
                        maxVal = grid[i + x][j + y];
                    }
                }
            }
            maxLocal[i - 1][j - 1] = maxVal;
        }
    }

    // Print the maxLocal matrix
    for (i = 0; i < n - 2; i++) {
        for (j = 0; j < n - 2; j++) {
            printf("%d ", maxLocal[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    int grid[100][100];

    // Input the size of the matrix
    printf("Enter the size of the matrix (n): ");
    scanf("%d", &n);

    // Input elements into the grid
    printf("Enter the elements of the matrix:\n");
    int i,j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &grid[i][j]);
/*  input:    1 2 3 4
			  5 6 7 8
			  9 10 11 12
  		 	 13 14 15 16        */
        }
    }

    // Generate and print the maxLocal matrix
    generateMaxLocal(grid, n);

    return 0;
}

