#include <stdio.h>

void selectionSort(int arr[], int N) {
	int i,j;
    for (i = 0; i < N - 1; i++) {
        int minIndex = i;
        for (j = i + 1; j < N; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap arr[i] and arr[minIndex]
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    // Declare an array of size N
    int arr[N];

    // Input elements into the array
    printf("Enter %d elements into the array:\n", N);
    int i;
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array using selection sort
    selectionSort(arr, N);

    // Output the sorted array
    printf("Output: {");
    for (i = 0; i < N - 1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d}\n", arr[N - 1]);

    return 0;
}

