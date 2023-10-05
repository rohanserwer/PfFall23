/*
Programmer: Rohan Serwer
Desc: Finding Min & Max numbers From Array
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
    
    int min = array[0]; // Assume the first element as minimum
    int max = array[0]; // Assume the first element as maximum
    
    // Finding minimum and maximum numbers in the array
    for(i = 1; i < n; i++) {
        if(array[i] < min) {
            min = array[i]; // Update minimum if current element is smaller
        }
        if(array[i] > max) {
            max = array[i]; // Update maximum if current element is larger
        }
    }
    
    // Displaying the minimum and maximum numbers
    printf("Minimum Number = %d\n", min);
    printf("Maximum Number = %d\n", max);
    
    return 0;
}	//end main
