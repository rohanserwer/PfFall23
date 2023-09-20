#include <stdio.h>	//global function

int main() {
    unsigned char num;

    // Input an 8-bit number from the user
    printf("Enter an 8-bit number (0-255): ");
    scanf("%hhu", &num);

    // Count the number of set bits (1s) in the number
    int setBitsCount = 0;
    unsigned char temp = num;
    while (temp > 0) {
        if (temp & 1) {
            setBitsCount++;
        }
        temp >>= 1;
    }//end while

    // Check if there are at least two set bits
    if (setBitsCount >= 2) {
        // Exchange the higher four bits with the lower four bits
        unsigned char lowerFourBits = num & 0x0F;
        unsigned char higherFourBits = (num >> 4) & 0x0F;
        unsigned char exchangedNum = (lowerFourBits << 4) | higherFourBits;

        printf("Original Number: %u\n", num);
        printf("Exchanged Number: %u\n", exchangedNum);
    } else {
        printf("There are not at least two set bits in the number. No exchange performed.\n");
    }//end if

    return 0;
}//end main

