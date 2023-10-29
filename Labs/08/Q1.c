#include <stdio.h>

// Function to swap two integers
void swapIntegers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input two integers from the user
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Call the function to swap the integers
    swapIntegers(&num1, &num2);

    // Display the swapped integers
    printf("Swapped integers: %d and %d\n", num1, num2);

    return 0;
}//end main

