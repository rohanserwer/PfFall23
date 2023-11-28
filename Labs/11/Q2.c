#include <stdio.h>
#include <string.h>

// Structure to store information about engine parts
struct EnginePart {
    char serialNumber[4];
    int yearOfManufacture;
    char material[20];
    int quantityManufactured;
};

// Structure to store date information
struct Date {
    int day;
    int month;
    int year;
};

// Function to retrieve information on parts with serial numbers between BB1 and CC6
void retrievePartsInfo(struct EnginePart parts[], int numParts) {
    printf("Parts with serial numbers between BB1 and CC6:\n");
    int i;
	for (i = 0; i < numParts; ++i) {
        // Check if the serial number is in the specified range
        if ((parts[i].serialNumber[0] >= 'B' && parts[i].serialNumber[0] <= 'C') &&
            (parts[i].serialNumber[1] >= 'B' && parts[i].serialNumber[1] <= 'C') &&
            (parts[i].serialNumber[2] >= '1' && parts[i].serialNumber[2] <= '6')) {
            // Print part information
            printf("Serial Number: %s\n", parts[i].serialNumber);
            printf("Year of Manufacture: %d\n", parts[i].yearOfManufacture);
            printf("Material: %s\n", parts[i].material);
            printf("Quantity Manufactured: %d\n", parts[i].quantityManufactured);
            printf("\n");
        }
    }
}

// Function to compare two dates
void compareDates(struct Date date1, struct Date date2) {
    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year) {
        printf("Dates are equal.\n");
    } else {
        printf("Dates are not equal.\n");
    }
}

int main() {
    struct EnginePart parts[] = {
        {"AA0", 2020, "Steel", 100},
        {"BB1", 2021, "Aluminum", 150},
        {"CC6", 2019, "Plastic", 80},
        {"DD3", 2022, "Carbon Fiber", 120},
        {"FF9", 2020, "Steel", 200}
    };

    int numParts = sizeof(parts) / sizeof(parts[0]);

    // Retrieve information on parts with serial numbers between BB1 and CC6
    retrievePartsInfo(parts, numParts);

    // Compare two dates entered by the user
    struct Date date1, date2;

    printf("Enter first date (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter second date (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Compare dates
    compareDates(date1, date2);

    return 0;
}

