#include <stdio.h>

// Recursive function to print n Fibonacci numbers
void printFibonacci(int n, int a, int b) {
    if (n > 0) {
        int nextFibonacci = a + b;
        printf("%d ", nextFibonacci);

        // Make two recursive calls for the previous two Fibonacci numbers
        printFibonacci(n - 1, b, nextFibonacci);
    }
}

int main() {
    int n;
    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &n);

    if (n >= 1) {
        // The first two Fibonacci numbers are 0 and 1
        printf("Fibonacci numbers: 0 1 ");
        // Start the recursion from the third Fibonacci number
        printFibonacci(n - 2, 0, 1);
    } else {
        printf("Invalid input. Please enter a positive integer greater than or equal to 1.");
    }

    printf("\n");

    return 0;
}//end main

