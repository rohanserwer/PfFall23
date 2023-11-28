#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROWS 1000
#define MAX_COLS 100

// Function to read CSV file and print information
void readAndPrintCSV(const char *filename) {
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        fprintf(stderr, "Error opening file %s\n", filename);
        exit(EXIT_FAILURE);
    }

    char line[1024];  // Assuming a maximum line length of 1024 characters
    char *token;

    // Read the header
    if (fgets(line, sizeof(line), file) != NULL) {
        // Print header with a blank line after
        printf("%s\n\n", line);

        // Count the number of columns in the header
        int numCols = 0;
        token = strtok(line, ",");
        while (token != NULL) {
            numCols++;
            token = strtok(NULL, ",");
        }

        // Read and print data
        int numRows = 0;
        while (fgets(line, sizeof(line), file) != NULL && numRows < MAX_ROWS) {
            // Print data with a blank line after each row
            printf("%s\n\n", line);
            numRows++;
        }

        // Print total number of rows and columns
        printf("Total number of rows: %d\n", numRows);
        printf("Total number of columns: %d\n", numCols);
    }

    fclose(file);
}

int main() {
    const char *filename = "example.csv";  // Replace with the name of your CSV file
    readAndPrintCSV(filename);

    return 0;
}

