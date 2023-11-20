/*
Programmer: Rohan Serwer
Desc: Function swap at lien 12
Date: 31-Oct-2023

*/
#include <stdio.h>

/*A: The values of j and k are not swapped because the swap function in the provided code does 
not correctly swap the values of its parameters. */


void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int j = 2, k = 5;
    printf("j=%d, k=%d\n", j, k);
    swap(&j, &k); // Pass the addresses of j and k to the swap function
    printf("j=%d, k=%d\n", j, k);

    return 0;
}//end main

