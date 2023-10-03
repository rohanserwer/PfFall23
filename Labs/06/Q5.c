/*
Programmer: Rohan Serwer
Desc: Output as shown in Q5
Date: 3-Oct-2023

*/
#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i <= 6; i++) {
        // If i is even, repeat i times
        if (i % 2 == 0) {
            for (j = 0; j < 4; j++) {
                printf("%d ", i);
            }
        }
        // If i is odd, print i once
        else {
            printf("%d %d", i, i);
        }

        printf("\n");
    }

    return 0;
}
