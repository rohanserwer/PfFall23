#include <stdio.h>
#include <stdlib.h>

// User-defined function to process the array and calculate sum, maximum, and minimum values
void processArray(int arr[], int size, int *sum, int *max, int *min) {
    *sum = 0; // Initialize sum
    *max = arr[0]; // Initialize max with the first element of the array
    *min = arr[0]; // Initialize min with the first element of the array

    // Iterate through the array to calculate sum, maximum, and minimum values
    int i;
	for (i = 0; i < size; ++i) {
        *sum += arr[i]; // Add current element to sum

        // Update maximum value if the current element is greater
        if (arr[i] > *max) {
            *max = arr[i];
        }

        // Update minimum value if the current element is smaller
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int size,i;

    // Input the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array based on the input size
    int *arr = (int *)malloc(size * sizeof(int));

    // Input elements of the array from the user
    printf("Enter %d integers separated by spaces: ", size);
    for (i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    int sum, max, min;

    // Call the function to process the array and calculate sum, maximum, and minimum values
    processArray(arr, size, &sum, &max, &min);

    // Display the results
    printf("Array Sum: %d\n", sum);
    printf("Maximum Value: %d\n", max);
    printf("Minimum Value: %d\n", min);

    // Free the dynamically allocated memory for the array
    free(arr);

    return 0;
}

