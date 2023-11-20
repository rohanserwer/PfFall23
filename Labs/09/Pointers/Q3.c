/*
Programmer: Rohan Serwer
Desc: Making 3 arrays of size N
Date: 31-Oct-2023

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed for random number generation
    srand(time(NULL));

    // Read the size of the arrays from the user
    int N;
    printf("Enter the size of the arrays: ");
    scanf("%d", &N);

    // Create arrays of char, int, and long long int using variable length arrays
    char charArray[N];
    int intArray[N];
    long long int longLongIntArray[N];

    // Initialize arrays with random values
    int i;
    for (i = 0; i < N; i++) {
        charArray[i] = rand() % 128; // Random char value between 0 and 127
        intArray[i] = rand() % 1000; // Random int value between 0 and 999
        longLongIntArray[i] = rand() % 1000000; // Random long long int value between 0 and 999999
    }

    // Print addresses and values using pointer arithmetic
    printf("Addresses and values stored in charArray:\n");
    for (i = 0; i < N; i++) {
        printf("Address: %p, Value: %d\n", (void*)&charArray[i], charArray[i]);
    }

    printf("\nAddresses and values stored in intArray:\n");
    for (i = 0; i < N; i++) {
        printf("Address: %p, Value: %d\n", (void*)&intArray[i], intArray[i]);
    }

    printf("\nAddresses and values stored in longLongIntArray:\n");
    for (i = 0; i < N; i++) {
        printf("Address: %p, Value: %lld\n", (void*)&longLongIntArray[i], longLongIntArray[i]);
    }

    /* Explanation: Adding to pointers of different types works differently because pointer arithmetic
     is based on the size of the data type. When you add an integer value to a pointer, it moves the
     pointer by the number of bytes equal to the size of the data type it points to. Therefore, adding
     1 to a pointer of type char moves it by 1 byte, adding 1 to a pointer of type int moves it by
     4 bytes (on most systems where int is 4 bytes), and adding 1 to a pointer of type long long int
     moves it by 8 bytes (on most systems where long long int is 8 bytes).*/
    
    return 0;
}//end main

