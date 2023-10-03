/*
Programmer: Rohan Serwer
Desc: English representation
Date: 3-Oct-2023

*/
#include <stdio.h>

int main() {
    int a, b;
    int i;

    // Input two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);

    // Iterate from a to b
    for (i = a; i <= b; i++) {
        if (i <= 9) {
            // Print English representation for numbers <= 9
            switch(i) {
                case 0: printf("Zero");
                        break;
                case 1: printf("One");
                        break;
                case 2: printf("Two");
                        break;
                case 3: printf("Three");
                        break;
                case 4: printf("Four");
                        break;
                case 5: printf("Five");
                        break;
                case 6: printf("Six");
                        break;
                case 7: printf("Seven");
                        break;
                case 8: printf("Eight");
                        break;
                case 9: printf("Nine");
                        break;
            }
        } else {
            // Check if the number is even or odd
            if (i % 2 == 0) {
                printf("Even");
            } else {
                printf("Odd");
            }
        }

        // Print a comma and space if the number is not the last one in the range
        if (i < b) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
