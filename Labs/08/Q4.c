/*
Programmer: Rohan Serwer
Desc: Validate the user-entered password by ensuring it is at least 8 characters long. Compare it to the stored password "Secure123" and authenticate the user.
Date: 29-Oct-2023

*/
#include <stdio.h>
#include <string.h>

int main() {
    char enteredPassword[50]; // Assuming a maximum password length of 50 characters
    char storedPassword[] = "Secure123"; // Stored password for comparison

    // Prompt the user to enter a password
    printf("Enter your password: ");
    scanf("%s", enteredPassword);

    // Validate the password length
    if (strlen(enteredPassword) >= 8) {
        // Compare entered password with stored password
        if (strcmp(enteredPassword, storedPassword) == 0) {
            printf("Login successful. Welcome!\n");
        } else {
            printf("Login failed. Incorrect password.\n");
        }
    } else {
        printf("Password must be at least 8 characters long.\n");
    }

    return 0;
}//end main

