/*
Programmer: Rohan Serwer
Desc: store the elements day, month and year 
Date: 21-Nov-2023

*/
#include <stdio.h>

// Structure to store date information
struct Date {
    int day;
    int month;
    int year;
};

// Function to compare two dates
int compareDates(struct Date date1, struct Date date2) {
    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year) {
        return 1; // Dates are equal
    } else {
        return 0; // Dates are not equal
    }
}

int main() {
    struct Date date1, date2;

    // Input date1
    printf("Enter the first date (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // Input date2
    printf("Enter the second date (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Compare dates and display the result
    if (compareDates(date1, date2)) {
        printf("Dates are equal.\n");
    } else {
        printf("Dates are not equal.\n");
    }

    return 0;
}

