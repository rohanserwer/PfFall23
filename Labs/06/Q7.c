/*
Programmer: Rohan Serwer
Desc: Sum of Arrays

Date: 3-Oct-2023

*/
#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("The sum of the elements is: %d\n", sum);

    return 0;
}//end main

