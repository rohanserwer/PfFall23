/*
Programmer: Rohan Serwer
Desc: Travel Planner.
Date: 29-Oct-2023

*/
#include <stdio.h>

int main() {
    // Flight availability data
    int availability[5][2] = {
        {1, 0}, // Monday: Morning (1 available, price $300), Evening (0, Not available)
        {1, 1}, // Tuesday: Morning (1 available, price $320), Evening (1 available, price $310)
        {0, 1}, // Wednesday: Morning (0, Not available), Evening (1 available, price $280)
        {1, 0}, // Thursday: Morning (1 available, price $380), Evening (0, Not available)
        {1, 1}  // Friday: Morning (1 available, price $375), Evening (1 available, price $400)
    };

    // Query 1: Find the day and time slot with the highest chance of booking
    int bestDay = -1, bestTimeSlot = -1, bestPrice = -1;
    int i,j;
    for ( i = 0; i < 5; ++i) {
        for (j = 0; j < 2; ++j) {
            if (availability[i][j] == 1 && (bestPrice == -1 || j == 0 || availability[bestDay][bestTimeSlot] == 0)) {
                bestDay = i;
                bestTimeSlot = j;
                bestPrice = (j == 0) ? 300 : 310;
            }
        }
    }

    // Query 2: Find the best option for morning flights
    int bestMorningDay = -1, bestMorningPrice = -1;
    for (i = 0; i < 5; ++i) {
        if (availability[i][0] == 1 && (bestMorningPrice == -1 || availability[i][0] == 0)) {
            bestMorningDay = i;
            bestMorningPrice = 320;
        }
    }

    // Query 3: Find the best option for evening flights
    int bestEveningDay = -1, bestEveningPrice = -1;
    for (i = 0; i < 5; ++i) {
        if (availability[i][1] == 1 && (bestEveningPrice == -1 || availability[i][1] == 0)) {
            bestEveningDay = i;
            bestEveningPrice = 310;
        }
    }

    // Query 4: Check availability and price for a specific day (Wednesday)
    int specificDay = 2; // Wednesday
    int morningAvailability = availability[specificDay][0];
    int morningPrice = (morningAvailability == 1) ? 320 : -1;
    int eveningAvailability = availability[specificDay][1];
    int eveningPrice = (eveningAvailability == 1) ? 280 : -1;

    // Display the results
    printf("1. Best Option (Day and Time Slot with Highest Chance of Booking):\n");
    printf("Day: %s, Time Slot: %s, Price: $%d\n", 
        (bestDay == 0) ? "Monday" : (bestDay == 1) ? "Tuesday" : (bestDay == 2) ? "Wednesday" : (bestDay == 3) ? "Thursday" : "Friday",
        (bestTimeSlot == 0) ? "Morning" : "Evening", bestPrice);
    printf("2. Best Option for Morning Flights:\n");
    printf("Day: %s, Price: $%d\n", 
        (bestMorningDay == 0) ? "Monday" : (bestMorningDay == 1) ? "Tuesday" : (bestMorningDay == 2) ? "Wednesday" : (bestMorningDay == 3) ? "Thursday" : "Friday",
        bestMorningPrice);
    printf("3. Best Option for Evening Flights:\n");
    printf("Day: %s, Price: $%d\n", 
        (bestEveningDay == 0) ? "Monday" : (bestEveningDay == 1) ? "Tuesday" : (bestEveningDay == 2) ? "Wednesday" : (bestEveningDay == 3) ? "Thursday" : "Friday",
        bestEveningPrice);
    printf("4. Specific Day Inquiry (Wednesday):\n");
    printf("Morning Availability: %s, Price: $%d\n", 
        (morningAvailability == 1) ? "Available" : "Not Available", morningPrice);
    printf("Evening Availability: %s, Price: $%d\n", 
        (eveningAvailability == 1) ? "Available" : "Not Available", eveningPrice);

    return 0;
}//end main

