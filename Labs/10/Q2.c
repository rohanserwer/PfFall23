#include <stdio.h>

// Generic swap function using XOR bitwise operator
void swap(void *a, void *b, size_t size) {
    unsigned char *byte_a = (unsigned char *)a;
    unsigned char *byte_b = (unsigned char *)b;

	int i;
    for (i = 0; i < size; ++i) {
        byte_a[i] ^= byte_b[i];
        byte_b[i] ^= byte_a[i];
        byte_a[i] ^= byte_b[i];
    }
}

int main() {
    // Example usage for integers
    int x = 5, y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Swap integers
    swap(&x, &y, sizeof(int));

    printf("After swapping: x = %d, y = %d\n", x, y);

    // Example usage for doubles
    double a = 3.14, b = 6.28;
    printf("\nBefore swapping: a = %lf, b = %lf\n", a, b);

    // Swap doubles
    swap(&a, &b, sizeof(double));

    printf("After swapping: a = %lf, b = %lf\n", a, b);

    return 0;
}

