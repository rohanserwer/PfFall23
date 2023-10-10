/*

*/
#include <stdio.h>

int main() {
    int dvd, dvsr; //dvd = divident | dvsr = divisor
    int quo = 0;	//quo = quotient 

    // Taking input from the user
    printf("Enter divident: ");
    scanf("%d", &dvd);
    printf("Enter divisor: ");
    scanf("%d", &dvsr);

    // Dividing numbers without using division operator
    while (dvd >= dvsr) {
        dvd -= dvsr;
        quo++;
    }

    printf("Quotient: %d\n", quo);
    printf("Remainder: %d\n", dvd);

    return 0;
}//end main

