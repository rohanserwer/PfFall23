#include <stdio.h>

// Function to reverse an array from start to end index
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // Move the indices towards the center
        start++;
        end--;
    }
}

// Function to rotate an array to the left by d positions
void leftRotate(int arr[], int N, int d) {
    // To handle the case if d is greater than the array size
    d = d % N;
    
    // Reverse the first d elements
    reverseArray(arr, 0, d - 1);
    // Reverse the remaining N-d elements
    reverseArray(arr, d, N - 1);
    // Reverse the entire array
    reverseArray(arr, 0, N - 1);
}

int main() {
    int N, d, i;

    // Taking input for array size
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];

    // Taking input for array elements
    printf("Enter the elements of the array: ");
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking input for the number of positions to rotate
    printf("Enter the number of positions to rotate left: ");
    scanf("%d", &d);

    // Rotate the array to the left by d positions
    leftRotate(arr, N, d);

    // Print the rotated array
    printf("Output: {");
    for (i = 0; i < N; i++) {
        printf("%d", arr[i]);
        if (i < N - 1) {
            printf(", ");
        }
    }
    printf("}\n");

    return 0;
}//end main

