#include <stdio.h>

int main() {
    int n;
    int sum = 0; 
    int i = 0; 
    
    printf("Enter the value of n: ");
    scanf("%d", &n); 

    while (i < n) {
        int num;
        printf("Enter integer %d: ", i+1);
        scanf("%d", &num); 

        // Add the square of the input integer to the sum
        sum += (num * num);

        i++; 
    }

    printf("Sum of the squares: %d\n", sum); 

    return 0;
}

