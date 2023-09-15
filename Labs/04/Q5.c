#include <stdio.h>

int main() {
    int d1, m1, year1;
    int d2, m2, year2;

    printf("Enter the date of birth for person 1 (DD MM YYYY): ");
    scanf("%d %d %d", &d1, &m1, &year1);

    printf("Enter the date of birth for person 2 (DD MM YYYY): ");
    scanf("%d %d %d", &d2, &m2, &year2);

    // Compare years
    while (year1 == year2) {
        // If years are the same, compare months
        while (m1 == m2) {
            // If months are the same, compare days
            while (d1 == d2) {
                printf("Both persons have the same date of birth.\n");
                return 0;
            }

            if (d1 < day2) {
                printf("Person 1 is older.\n");
                return 0;
            } else {
                printf("Person 2 is older.\n");
                return 0;
            }
        }

        if (m1 < month2) {
            printf("Person 1 is older.\n");
            return 0;
        } else {
            printf("Person 2 is older.\n");
            return 0;
        }
    }

    if (year1 < year2) {
        printf("Person 1 is older.\n");
    } else {
        printf("Person 2 is older.\n");
    }

    return 0;
}

