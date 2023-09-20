#include <stdio.h>	//global function

int main() {
    unsigned char num;

    // Input an 8-bit number from the user
    printf("Enter an 8-bit number (0-255): ");
    scanf("%hhu", &num);

    // Check if the 4th and 7th bits are on
    if ((num & (1 << 3)) && (num & (1 << 6))) 
	{
        // Turn off the 4th and 7th bits
        num &= ~(1 << 3); // Turn off 4th bit
        num &= ~(1 << 6); // Turn off 7th bit

        printf("The 4th and 7th bits have been turned off. New value: %u\n", num);
    } else {
        printf("The 4th and/or 7th bits are not set.\n");
    } //end if 

    return 0;
}//end main

