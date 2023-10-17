/*
Programmer: Rohan Serwer
Desc: Output Frequency 
Date: 10-Oct-2023

*/
#include <stdio.h>

int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    // Declare an array of size N
    int arr[N];

    // Input elements into the array
    printf("Enter %d elements into the array:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate frequency of each element
    int frequency[N]; // Array to store frequency of elements
    for (int i = 0; i < N; i++) {
        frequency[i] = -1; // Initialize frequency array with -1
    }

    for (int i = 0; i < N; i++) {
        int count = 1;
        for (int j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
                frequency[j] = 0; // Set frequency of repeated elements to 0
            }
        }
        if (frequency[i] != 0) {
            frequency[i] = count;
        }
    }

    // Output frequency of each element
    printf("Output:\n");
    for (int i = 0; i < N; i++) {
        if (frequency[i] != 0) {
            printf("Frequency of %d = %d\n", arr[i], frequency[i]);
        }
    }

    return 0;
}//end main

