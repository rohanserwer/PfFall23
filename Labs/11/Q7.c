/*
Programmer: Rohan Serwer
Desc: Create a menu of a library.
Date: 21-Nov-2023

*/
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 50

// Structure to store book information
struct Book {
    int accessionNumber;
    char author[50];
    char title[100];
    int isIssued; // Flag to indicate whether the book is issued (1) or not (0)
};

// Function to display book information
void displayBookInfo(struct Book book) {
    printf("Accession Number: %d\n", book.accessionNumber);
    printf("Author: %s\n", book.author);
    printf("Title: %s\n", book.title);
    printf("Issued: %s\n", (book.isIssued) ? "Yes" : "No");
}

// Function to display all books in the library
void displayAllBooks(struct Book library[], int numBooks) {
    printf("All Books in the Library:\n");
    int i;
	for (i = 0; i < numBooks; ++i) {
        displayBookInfo(library[i]);
        printf("\n");
    }
}

// Function to display books of a particular author
void displayBooksByAuthor(struct Book library[], int numBooks, const char *author) {
    printf("Books by Author %s:\n", author);
    int i;
	for (i = 0; i < numBooks; ++i) {
        if (strcmp(library[i].author, author) == 0) {
            displayBookInfo(library[i]);
            printf("\n");
        }
    }
}

// Function to display the number of books with a particular title
void displayNumberOfBooksByTitle(struct Book library[], int numBooks, const char *title) {
    int count = 0;
    int i;
	for (i = 0; i < numBooks; ++i) {
        if (strcmp(library[i].title, title) == 0) {
            count++;
        }
    }
    printf("Number of Books with Title %s: %d\n", title, count);
}

// Function to display the total number of books in the library
void displayTotalNumberOfBooks(int numBooks) {
    printf("Total Number of Books in the Library: %d\n", numBooks);
}

// Function to issue a book
void issueBook(struct Book *book) {
    if (book->isIssued == 0) {
        book->isIssued = 1;
        printf("Book Issued Successfully.\n");
    } else {
        printf("Book is already issued.\n");
    }
}

// Function to add a new book
void addNewBook(struct Book library[], int *numBooks) {
    if (*numBooks < MAX_BOOKS) {
        struct Book newBook;
        printf("Enter Accession Number: ");
        scanf("%d", &newBook.accessionNumber);
        printf("Enter Author: ");
        scanf(" %[^\n]s", newBook.author);
        printf("Enter Title: ");
        scanf(" %[^\n]s", newBook.title);
        newBook.isIssued = 0; // Initially, the book is not issued

        library[*numBooks] = newBook;
        (*numBooks)++;
        printf("New Book Added Successfully.\n");
    } else {
        printf("Maximum number of books reached.\n");
    }
}

int main() {
    struct Book library[MAX_BOOKS];
    int numBooks = 0;

    int choice;
    char authorName[50];
    char titleName[100];

                int accession;
    do {
        // Display Menu
        printf("\nLibrary Menu:\n");
        printf("1. Display Book Information\n");
        printf("2. Add a New Book\n");
        printf("3. Display Books by Author\n");
        printf("4. Display Number of Books by Title\n");
        printf("5. Display Total Number of Books\n");
        printf("6. Issue a Book\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayAllBooks(library, numBooks);
                break;
            case 2:
                addNewBook(library, &numBooks);
                break;
            case 3:
                printf("Enter the author's name: ");
                scanf(" %[^\n]s", authorName);
                displayBooksByAuthor(library, numBooks, authorName);
                break;
            case 4:
                printf("Enter the title: ");
                scanf(" %[^\n]s", titleName);
                displayNumberOfBooksByTitle(library, numBooks, titleName);
                break;
            case 5:
                displayTotalNumberOfBooks(numBooks);
                break;
            case 6:
                printf("Enter the Accession Number of the book to issue: ");
                scanf("%d", &accession);
                int i;
				for (i = 0; i < numBooks; ++i) {
                    if (library[i].accessionNumber == accession) {
                        issueBook(&library[i]);
                        break;
                    }
                }
                break;
            case 0:
                printf("Exiting the Library Menu.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}

