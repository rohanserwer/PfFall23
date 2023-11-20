/*
Programmer: Rohan Serwer
Desc: Finding GCD first using loops and then using recursion.
Date: 31-Oct-2023

*/
#include <stdio.h>

// Function to find GCD of two numbers using loops
int gcdWithLoop(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find GCD of two numbers using recursion
int gcdWithRecursion(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcdWithRecursion(b, a % b);
    }
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Using loops
    int gcdLoop = gcdWithLoop(num1, num2);
    printf("GCD using loops: %d\n", gcdLoop);

    // Using recursion
    int gcdRecursion = gcdWithRecursion(num1, num2);
    printf("GCD using recursion: %d\n", gcdRecursion);

    return 0;
}//end main

