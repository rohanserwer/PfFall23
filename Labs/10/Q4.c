/*
Programmer: Rohan Serwer
Desc: Taking a sentence as input and using pointer arithmetic to reverse each word in the sentence while keeping the words in their original order. 
Date: 14-Nov-2023

*/
#include <stdio.h>
#include <string.h>

// Function to reverse a word using pointer arithmetic
void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

// Function to reverse each word in a sentence
void reverseWords(char *sentence) {
    char *start = sentence;
    char *end = sentence;

    while (*end) {
        if (*end == ' ' || *end == '\0') {
            // Found a word boundary, reverse the current word
            reverseWord(start, end - 1);

            // Move to the next word
            start = end + 1;
        }
        end++;
    }
}

int main() {
    char sentence[1000];

    // Input sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the trailing newline character if present
    size_t len = strlen(sentence);
    if (sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    // Reverse each word in the sentence
    reverseWords(sentence);

    // Print the modified sentence
    printf("Modified sentence: %s\n", sentence);

    return 0;
}

