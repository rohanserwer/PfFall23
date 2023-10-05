/*
Programmer: Rohan Serwer
Desc: LCM and GCD

Date: 3-Oct-2023

*/
#include <stdio.h>

int main() {
    int num1, num2, temp, gcd, lcm;

    // Input two numbers from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Find GCD
    int a = num1;
    int b = num2;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // Find LCM using the formula: LCM = (num1 * num2) / GCD
    lcm = (num1 * num2) / gcd;

    // Output the results
    printf("GCD: %d \n", gcd);
    printf("LCM: %d\n", lcm);

    return 0;
}//end main
