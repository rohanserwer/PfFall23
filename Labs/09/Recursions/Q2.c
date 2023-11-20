/*
Programmer: Rohan Serwer
Desc: Finding the product of 2 numbers without using multiplication operator and loops.
Date: 31-Oct-2023

*/
#include <stdio.h>

// Function to calculate product using recursion and addition only
int multiply(int a, int b) {
    // Base case: if the second number is 0, the product is 0
    if (b == 0) {
        return 0;
    }
    // Recursive case: multiply(a, b) = a + multiply(a, b - 1)
    else {
        return a + multiply(a, b - 1);
    }
}

int main() {
    int num1, num2;
    printf("Enter two numbers to calculate their product: ");
    scanf("%d %d", &num1, &num2);

    int result = multiply(num1, num2);
    printf("Product of %d and %d is: %d\n", num1, num2, result);

    return 0;
}//end main

