/*
Programmer: Rohan Serwer
Desc: Create two files and compare info
Date: 28-Nov-2023

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createWordFile(const char *filename, const char *content) {
    FILE *file = fopen(filename, "w");

    if (file == NULL) {
        fprintf(stderr, "Error creating file %s\n", filename);
        exit(EXIT_FAILURE);
    }

    fprintf(file, "%s", content);

    fclose(file);
}

int compareFiles(const char *filename1, const char *filename2) {
    FILE *file1 = fopen(filename1, "rb");
    FILE *file2 = fopen(filename2, "rb");

    if (file1 == NULL || file2 == NULL) {
        fprintf(stderr, "Error opening files for comparison\n");
        exit(EXIT_FAILURE);
    }

    int isDifferent = 0;
    int char1, char2;

    while (1) {
        char1 = fgetc(file1);
        char2 = fgetc(file2);

        if (char1 != char2) {
            isDifferent = 1;
            break;
        }

        if (char1 == EOF || char2 == EOF) {
            break;
        }
    }

    fclose(file1);
    fclose(file2);

    return isDifferent;
}

int main() {
    const char *file1Name = "test1.docx";
    const char *file2Name = "test2.docx";
    const char *content = "This is a test.";

    // Create Word files with the given content
    createWordFile(file1Name, content);
    createWordFile(file2Name, content);

    // Compare the contents of the two files
    int isDifferent = compareFiles(file1Name, file2Name);

    if (isDifferent) {
        printf("The contents of the files are different.\n");
    } else {
        printf("The contents of the files are equal.\n");
    }

    return 0;
}

