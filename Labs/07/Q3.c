#include <stdio.h>

int main() {
    int number, originalNumber, sum = 0, digit;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Storing the original number for reference
    originalNumber = number;

    // Calculating the sum of digits
    while (number > 0) {
        digit = number % 10; // Extract the last digit
        sum += digit; // Add the digit to the sum
        number /= 10; // Remove the last digit from the number
    }

    // Printing the sum of digits
    printf("Sum of digits of %d is: %d\n", originalNumber, sum);

    return 0;
}//end main
