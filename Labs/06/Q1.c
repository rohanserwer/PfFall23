/*
Programmer: Rohan Serwer
Desc: Perfect number or not
Date: 3-Oct-2023

*/
#include <stdio.h>

int main() {
    int num, sum = 0, i;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the sum of proper divisors
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the number is perfect or not
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
