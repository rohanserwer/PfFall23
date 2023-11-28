#include <stdio.h>
#include <string.h>

// Structure to store employee information
struct Employee {
    char name[50];
    float salary;
    int hoursOfWork;
};

// Function to increase salary based on hours of work per day
void increaseSalary(struct Employee *employee) {
    if (employee->hoursOfWork >= 12) {
        employee->salary += 150;
    } else if (employee->hoursOfWork >= 10) {
        employee->salary += 100;
    } else if (employee->hoursOfWork >= 8) {
        employee->salary += 50;
    }
}

int main() {
    struct Employee employees[10];

    // Input employee information
    int i;
	for (i = 0; i < 10; ++i) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);  // Assuming a single-word name for simplicity
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Hours of Work per Day: ");
        scanf("%d", &employees[i].hoursOfWork);
        printf("\n");
    }

    // Increase salary based on hours of work per day
	
	for (i = 0; i < 10; ++i) {
        increaseSalary(&employees[i]);
    }

    // Print the names of employees along with their final salaries
    printf("Employee Details after Salary Increase:\n");
    printf("Name\t\tFinal Salary\n");
    for (i = 0; i < 10; ++i) {
        printf("%-15s\t%.2f\n", employees[i].name, employees[i].salary);
    }

    return 0;
}

