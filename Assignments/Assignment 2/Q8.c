/*
Programmer: Rohan Serwer
Desc: Prompting the user to enter a positive integer until EOF is entered via the keyboard. 
Date: 29-Oct-2023

*/
#include <stdio.h>

int calculatePersistence(int num) {
    int persistence = 0;
    
    while (num >= 10) {
        int product = 1;
        while (num > 0) {
            product *= num % 10;
            num /= 10;
        }
        num = product;
        persistence++;
    }
    
    return persistence;
}

int main() {
    int num;
    printf("Enter a positive integer (or EOF to exit): ");
    
    while (scanf("%d", &num) != EOF) {
        if (num <= 0) {
            printf("Invalid input. Please enter a positive integer: ");
            continue;
        }
        
        int persistence = calculatePersistence(num);
        printf("Persistence number of %d is %d.\n", num, persistence);
        
        // Clear input buffer
        while (getchar() != '\n');
        
        printf("Enter another positive integer (or EOF to exit): ");
    }
    
    printf("EOF detected. Exiting the program.\n");
    return 0;
}

