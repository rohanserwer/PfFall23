/*
Programmer: Rohan Serwer
Desc: Universal array printing function
Date: 14-Nov-2023

*/
#include <stdio.h>

void printArray(void *arr, size_t size, int dataType) {
    size_t i;

    switch (dataType) {
        case 1: // Assuming int
            for (i = 0; i < size / sizeof(int); i++) {
                printf("%d ", *((int*)arr + i));
            }
            break;

        case 2: // Assuming double
            for (i = 0; i < size / sizeof(double); i++) {
                printf("%lf ", *((double*)arr + i));
            }
            break;

        // Add more cases for other data types as needed

        default:
            printf("Unsupported data type\n");
            break;
    }

    printf("\n");
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    size_t intArraySize = sizeof(intArray);
    size_t doubleArraySize = sizeof(doubleArray);

    printf("Printing integer array:\n");
    printArray(intArray, intArraySize, 1);

    printf("\nPrinting double array:\n");
    printArray(doubleArray, doubleArraySize, 2);

    return 0;
}

