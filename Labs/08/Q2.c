#include <stdio.h>

// Function to perform basic arithmetic operations
double calculate(double num1, double num2, char operation) {
    switch(operation) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 0;
            }
        default:
            printf("Error: Invalid operation.\n");
            return 0;
    }
}

int main() {
    double num1, num2, result;
    char operation;

    // Input two numbers and the operation choice from the user
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation); // Note the space before %c to consume the newline character

    // Call the function to perform the operation
    result = calculate(num1, num2, operation);

    // Display the result
    printf("Result: %.2lf\n", result);

    return 0;
}//end main

