/*
Programmer: Rohan Serwer
Desc: Implementing the function that reverses the array passed
to its arguments.
Date: 31-Oct-2023

*/
#include <stdio.h>

void reverse(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;

    while (start < end) {
        // Swap elements pointed by start and end pointers
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers towards the center
        start++;
        end--;
    }
}

int main() {
    int arr[10]; // Declare an array of size 10
    int i;

    // Taking 10 inputs from the user and storing them in the array
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the original array
    printf("Original array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call the reverse function to reverse the array
    reverse(arr, 10);

    // Print the reversed array
    printf("Reversed array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

