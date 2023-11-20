#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to multiply each element in a 2D array by 3 and then divide by 2
void processArray(int** array, int rows, int cols) {
	int i,j;
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            array[i][j] = (array[i][j] * 3) / 2;
        }
    }
}

// Function to allocate a 2D array using a single malloc call
int** allocateSingleMalloc(int rows, int cols) {
    int** array = (int**)malloc(rows * sizeof(int*));
    array[0] = (int*)malloc(rows * cols * sizeof(int));
	int i,j;
    for (i = 1; i < rows; ++i) {
        array[i] = array[0] + i * cols;
    }

    return array;
}

// Function to allocate a 2D array using multiple malloc calls
int** allocateMultipleMalloc(int rows, int cols) {
    int** array = (int**)malloc(rows * sizeof(int*));

	int i;
    for (i = 0; i < rows; ++i) {
        array[i] = (int*)malloc(cols * sizeof(int));
    }

    return array;
}

// Function to free the allocated memory for a 2D array
void freeArray(int** array, int rows) {
    free(array[0]);
    free(array);
}

int main() {
    const int sizes[][2] = {{100, 100}, {500, 500}, {800, 800}};
    const int num_sizes = sizeof(sizes) / sizeof(sizes[0]);

	int k;
    for (k = 0; k < num_sizes; ++k) {
        int rows = sizes[k][0];
        int cols = sizes[k][1];

        // Timing for single malloc approach
        clock_t start_time = clock();
        int** array1 = allocateSingleMalloc(rows, cols);
        processArray(array1, rows, cols);
        freeArray(array1, rows);
        clock_t end_time = clock();

        double cpu_time_used1 = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

        // Timing for multiple malloc approach
        start_time = clock();
        int** array2 = allocateMultipleMalloc(rows, cols);
        processArray(array2, rows, cols);
        freeArray(array2, rows);
        end_time = clock();

        double cpu_time_used2 = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

        printf("Array Size: %dx%d\n", rows, cols);
        printf("Single Malloc Time: %f seconds\n", cpu_time_used1);
        printf("Multiple Malloc Time: %f seconds\n", cpu_time_used2);
        printf("\n");
    }

    return 0;
}

