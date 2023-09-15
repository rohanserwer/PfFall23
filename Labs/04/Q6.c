#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i = 1;

    // Loop for upper part of the pattern
    while (i <= n) {
        int j = 1;

        // Print spaces before the first asterisk
        while (j <= n - i) {
            printf(" ");
            j++;
        }

        // Print the first asterisk
        printf("*");

        if (i > 1) {
            j = 1;

            // Print spaces between asterisks
            while (j <= 2 * (i - 1) - 1) {
                printf(" ");
                j++;
            }

            // Print the second asterisk
            printf("*");
        }

        printf("\n");
        i++;
    }

    i = n - 1;

    // Loop for lower part of the pattern
    while (i >= 1) {
        int j = 1;

        // Print spaces before the first asterisk
        while (j <= n - i) {
            printf(" ");
            j++;
        }

        // Print the first asterisk
        printf("*");

        if (i > 1) {
            j = 1;

            // Print spaces between asterisks
            while (j <= 2 * (i - 1) - 1) {
                printf(" ");
                j++;
            }

            // Print the second asterisk
            printf("*");
        }

        printf("\n");
        i--;
    }

    return 0;
}

