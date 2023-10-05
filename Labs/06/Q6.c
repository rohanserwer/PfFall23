/*
Programmer: Rohan Serwer
Desc: Match stick program against computer

Date: 3-Oct-2023

*/
#include <stdio.h>

int main() {
    int ms = 21;		// ms= match sticks
    int user, comp; 	// comp = computer's choice  user= user's choice

    printf("Welcome to the Matchstick Game!\n");

    while (ms > 1) {
        // User's turn
        printf("There are %d match sticks left. Pick 1, 2, 3, or 4 ms: ", ms);
        scanf("%d", &user);

        if (user < 1 || user > 4 || user > ms) {
            printf("Invalid input. Please pick 1, 2, 3, or 4 ms.\n");
            continue;
        }

        ms -= user;
        printf("You picked %d matchstick(s). %d matchstick(s) left.\n\n", user, ms);

        // Computer's turn
        comp = 5 - user; // Ensures the sum of user's and computer's choice is always 5
        printf("Computer picks %d matchstick(s).\n", comp);
        ms -= comp;
        printf("There are %d matchstick(s) left.\n", ms);
    }

    // Remaining matchstick is 1, so the user loses the game
    printf("\nYou are forced to pick the last match stick. You lose!\n");

    return 0;
}//end main

