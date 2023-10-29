/*
Programmer: Rohan Serwer
Desc: A program for a coffee shop that calculates discounts based on customer loyalty and purchase history. 
Date: 29-Oct-2023

*/
#include <stdio.h>

// User-defined function to calculate discount based on customer loyalty and purchase history
double calculateDiscount(double purchaseAmount, int visitCount) {
    double discount = 0.0; // Initialize discount amount

    // Check loyalty and purchase history to determine the discount
    if (visitCount > 10 && purchaseAmount >= 50) {
        discount = 0.15 * purchaseAmount; // 15% discount
    } else if (visitCount > 5 && purchaseAmount >= 30) {
        discount = 0.10 * purchaseAmount; // 10% discount
    }

    return discount;
}

int main() {
    double purchaseAmount;
    int visitCount;

    // Input total purchase amount and visit count from the user
    printf("Enter total purchase amount: $");
    scanf("%lf", &purchaseAmount);
    printf("Enter number of times visited in the past month: ");
    scanf("%d", &visitCount);

    // Call the function to calculate the discount
    double discount = calculateDiscount(purchaseAmount, visitCount);

    // Display the discount amount
    if (discount > 0) {
        printf("Discount Amount: $%.2lf\n", discount);
    } else {
        printf("No discount applied.\n");
    }

    return 0;
}

