/*
Programmer: Rohan Serwer
Desc: 2D array for bill,braches of bill, bill ID, max bill.
Date: 10-Oct-2023

*/
#include <stdio.h>

int main() {
    int branches, phones;

    // Get the number of branches and phones per branch from the user
    printf("Enter the number of branches: ");
    scanf("%d", &branches);
    printf("Enter the number of mobile phones per branch: ");
    scanf("%d", &phones);

    // Declare a 2D array for bill amounts
    int bills[branches][phones];

    // Input bill amounts for each mobile phone in each branch
    int i,j;
	for (i = 0; i < branches; i++) {
        printf("Enter bill amounts for branch %d:\n", i + 1);
        for (j = 0; j < phones; j++) {
            printf("Enter bill amount for phone %d in branch %d: ", j + 1, i + 1);
            scanf("%d", &bills[i][j]);
        }
    }

    // Calculate total bill for all branches
    int totalBill = 0;
    for (i = 0; i < branches; i++) {
        for (j = 0; j < phones; j++) {
            totalBill += bills[i][j];
        }
    }

    // Calculate total bill for each branch and find maximum bill and its branch and phone IDs
    int maxBill = -1, maxBranch = -1, maxPhone = -1;
    for (i = 0; i < branches; i++) {
        int branchTotal = 0;
        for (j = 0; j < phones; j++) {
            branchTotal += bills[i][j];
            if (bills[i][j] > maxBill) {
                maxBill = bills[i][j];
                maxBranch = i + 1;
                maxPhone = j + 1;
            }
        }
        printf("Total bill for branch %d: %d\n", i + 1, branchTotal);
    }

    // Print the results
    printf("\nTotal bill for all branches: %d\n", totalBill);
    printf("Branch ID where maximum bill arrived: %d\n", maxBranch);
    printf("Branch and Mobile Phone IDs where bill is highest: Branch %d, Phone %d (Bill: %d)\n", maxBranch, maxPhone, maxBill);

    return 0;
}

