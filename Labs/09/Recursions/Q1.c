/*
Programmer: Rohan Serwer
Desc: Finding factorial of any integer N using recursion.
Date: 31-Oct-2023

*/
#include <stdio.h>

// Function to calculate factorial using recursion
unsigned long long int factorial(int N) {
    // Base case: factorial of 0 is 1
    if (N == 0 || N == 1) {
        return 1;
    }
    // Recursive case: N! = N * (N-1)!
    else {
        return N * factorial(N - 1);
    }
}

int main() {
    int N;
    printf("Enter an integer to calculate its factorial: ");
    scanf("%d", &N);

    // Check if the input is negative
    if (N < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long int result = factorial(N);
        printf("Factorial of %d = %llu\n", N, result);
    }

    return 0;
}//end main

