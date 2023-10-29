#include <stdio.h>
#include <string.h>

int main() {
    char input[100]; // Assuming a maximum input length of 100 characters
    char targetChar = 'a'; // Character to search for
    int count = 0; // Counter for occurrences of the target character

    // Read input from the user
    printf("Enter a text: ");
    fgets(input, sizeof(input), stdin);

    // Use strchr function to search for the target character
    char *ptr = strchr(input, targetChar);

    // Count occurrences of the target character using strchr
    while (ptr != NULL) {
        count++;
        ptr = strchr(ptr + 1, targetChar);
    }

    // Display the total count of occurrences of the target character
    printf("Total occurrences of '%c' in the input text: %d\n", targetChar, count);

    return 0;
}//end main

