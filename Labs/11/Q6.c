/*
Programmer: Rohan Serwer
Desc: Date having day, month and year as its elements and add 45 days to it
company.
Date: 21-Nov-2023

*/
#include <stdio.h>
#include <time.h>

// Structure to store date information
struct Date {
    int day;
    int month;
    int year;
};

// Function to add days to a date
void addDays(struct Date *date, int days) {
    // Convert the date to seconds since epoch
    time_t currentTime;
    struct tm *currentDate;

    time(&currentTime);
    currentDate = localtime(&currentTime);

    currentDate->tm_year = date->year - 1900;
    currentDate->tm_mon = date->month - 1;
    currentDate->tm_mday = date->day;

    // Add days to the date
    time_t newTime = mktime(currentDate) + days * 24 * 60 * 60;

    // Convert back to struct Date
    struct tm *newDate = localtime(&newTime);

    date->day = newDate->tm_mday;
    date->month = newDate->tm_mon + 1;
    date->year = newDate->tm_year + 1900;
}

int main() {
    struct Date currentDate;

    // Get current date
    time_t currentTime;
    struct tm *currentDateInfo;

    time(&currentTime);
    currentDateInfo = localtime(&currentTime);

    currentDate.day = currentDateInfo->tm_mday;
    currentDate.month = currentDateInfo->tm_mon + 1;
    currentDate.year = currentDateInfo->tm_year + 1900;

    // Display current date
    printf("Current Date: %02d/%02d/%04d\n", currentDate.day, currentDate.month, currentDate.year);

    // Add 45 days to the current date
    addDays(&currentDate, 45);

    // Display the final date
    printf("Final Date after adding 45 days: %02d/%02d/%04d\n", currentDate.day, currentDate.month, currentDate.year);

    return 0;
}

