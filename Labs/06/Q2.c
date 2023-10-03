/*
Programmer: Rohan Serwer
Desc: Fibonacci series till 10000
Date: 3-Oct-2023

*/
#include <stdio.h>

int main() {
    int num1 = 1, num2 = 1, nextTerm, sum = 0;

    printf("Fibonacci Series up to 10000: 1 1 ");

    for (nextTerm = 2; nextTerm <= 10000;) {
        nextTerm = num1 + num2;

        if (nextTerm <= 10000) {
            printf("%d ", nextTerm);

            // Check if the number is divisible by 3, 5, or 7
            if (nextTerm % 3 == 0 || nextTerm % 5 == 0 || nextTerm % 7 == 0) {
                sum += nextTerm;
            }

            num1 = num2;
            num2 = nextTerm;
        } else {
            break;
        }
    }

    printf("\nSum of Fibonacci numbers divisible by 3, 5, or 7: %d\n", sum);

    return 0;
}
