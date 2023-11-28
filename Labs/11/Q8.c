/*
Programmer: Rohan Serwer
Desc: Find the volume of each box that can be successfully transported to the other end of the tunnel.
Date: 21-Nov-2023

*/
#include <stdio.h>

// Structure to store box information
struct Box {
    int length;
    int width;
    int height;
};

// Function to calculate the volume of a box
int calculateVolume(struct Box box) {
    return box.length * box.width * box.height;
}

// Function to check if a box can be transported through the tunnel
int canTransport(struct Box box, int tunnelHeight) {
    return box.height < tunnelHeight;
}

int main() {
    int numBoxes;

    // Input the number of boxes
    printf("Enter the number of boxes: ");
    scanf("%d", &numBoxes);

    // Input box information and calculate volume
    int i;
	for (i = 0; i < numBoxes; ++i) {
        struct Box currentBox;

        // Input box dimensions
        printf("Enter dimensions for Box %d (length width height): ", i + 1);
        scanf("%d %d %d", &currentBox.length, &currentBox.width, &currentBox.height);

        // Check if the box can be transported and calculate volume
        if (canTransport(currentBox, 41)) {
            int volume = calculateVolume(currentBox);
            printf("Volume of Box %d: %d\n", i + 1, volume);
        } else {
            printf("Box %d cannot be transported through the tunnel.\n", i + 1);
        }
    }

    return 0;
}

