/*
Programmer: Rohan Serwer
Desc: Managing and sort shirt details for a clothing store
Date: 29-Oct-2023

*/
#include <stdio.h>

void sortShirts(int ages[], float prices[], int size) {
    // Bubble sort based on age in ascending order
    int i,j;
	for ( i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (ages[j] > ages[j + 1]) {
                // Swap ages
                int tempAge = ages[j];
                ages[j] = ages[j + 1];
                ages[j + 1] = tempAge;

                // Swap prices
                float tempPrice = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = tempPrice;
            }
        }
    }

    // Bubble sort based on price in descending order within the same age
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (ages[j] == ages[j + 1] && prices[j] < prices[j + 1]) {
                // Swap prices within the same age
                float tempPrice = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = tempPrice;
            }
        }
    }
}

int main() {
    int ages[] = {25, 30, 25, 28, 30}; // Sample ages
    float prices[] = {20.5, 25.2, 18.7, 22.3, 26.0}; // Sample prices
    int size = sizeof(ages) / sizeof(ages[0]);
    int i;

    // Sorting shirts based on age and price
    sortShirts(ages, prices, size);

    // Displaying sorted shirt details
    printf("Sorted list in ascending order with respect to Age:\n");
    for (i = 0; i < size; i++) {
        printf("Age: %d, Price: %.2f\n", ages[i], prices[i]);
    }

    printf("\nSorted list in descending order with respect to Price within the same Age:\n");
    for (i = 0; i < size; i++) {
        printf("Age: %d, Price: %.2f\n", ages[i], prices[i]);
    }

    return 0;
}

