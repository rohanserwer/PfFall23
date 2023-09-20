#include <stdio.h>	//global function

int main() {
    double totalCost, discount = 0.0, savedAmount = 0.0, discountedCost = 0.0;

    // Input the total cost of items
    printf("Enter the total cost of items: ");
    scanf("%lf", &totalCost);

    // Calculate the discount based on the given rules
    
    if (totalCost > 1999 && totalCost <= 2000) {
        discount = 0.5;	 	// 50% discount
    } else if (totalCost > 2000 && totalCost <= 4000) {
        discount = 0.2;		 // 20% discount
    } else if (totalCost > 4000 && totalCost <= 6000) {
        discount = 0.3; 	// 30% discount
    } else if (totalCost > 6000) {
        discount = 0.5; 	// 50% discount
    }	//end if

    // Calculate the saved amount and discounted cost
    savedAmount = totalCost * discount;
    discountedCost = totalCost - savedAmount;

    // Display the results
    printf("Actual Amount: %.2lf\n", totalCost);
    printf("Saved Amount: %.2lf\n", savedAmount);
    printf("Amount After Discount: %.2lf\n", discountedCost);

    return 0;
}//end main

