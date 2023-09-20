#include <stdio.h>	//global function

int main() {
    int LI;	//LI = light intensity

    // Input the light intensity from the ambient light sensor (0-1000)
    printf("Enter the light intensity (0-1000): ");
    scanf("%d", &LI);

    // Determine the brightness level based on the light intensity
    if (LI > 500) {
        printf("Set brightness to high for sunshine.\n");
    } else if (LI >= 100 && LI <= 500) {
        printf("Set brightness to medium for lighting.\n");
    } else if (LI >= 0 && LI < 100) {
        printf("Set brightness to low for evening.\n");
    } else {
        printf("Invalid light intensity value.\n");
    }//end if

    return 0;
}//end main

