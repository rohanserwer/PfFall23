/*
Programmer: Rohan Serwer
Desc: Reverse output of array
Date: 3-Oct-2023

*/
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Displaying the array in reverse order
    printf("Array in reverse order: ");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}//end main

