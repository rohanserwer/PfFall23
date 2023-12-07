/*
 * 	  Name: Rohan Serwer
 *    Date: 2023-12-08
 *    Desc: Program to manage departments and employees
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 5
#define NUM_DEPARTMENTS 4
#define NUM_ROLES 5
#define NUM_NAMES 20

// Structure to represent an employee
typedef struct {
    char name[20];
    char role[20];
    int communication;
    int teamwork;
    int creativity;
} Employee;

// Structure to represent a department
typedef struct {
    char departmentName[20];
    Employee employees[MAX_EMPLOYEES];
} Department;

// Function to generate a random number between min and max
int getRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Function to generate a random name from the pool
void getRandomName(char names[][20], int index, char result[]) {
    strcpy(result, names[index]);
}

// Function to initialize an employee with random attributes
void initializeEmployee(Employee *employee, char names[][20]) {
    getRandomName(names, rand() % NUM_NAMES, employee->name);

    // List of roles in a department
    char roles[NUM_ROLES][20] = {"Director", "Executive", "Manager", "Employee", "Trainee"};
    
    // Shuffle the roles
    int i, j; // Declare i and j outside the loop
    for (i = NUM_ROLES - 1; i > 0; i--) {
        j = rand() % (i + 1);
        char temp[20];
        strcpy(temp, roles[i]);
        strcpy(roles[i], roles[j]);
        strcpy(roles[j], temp);
    }

    // Assign a role to the employee
    strcpy(employee->role, roles[rand() % NUM_ROLES]);

    // Assign random values for communication, teamwork, and creativity
    employee->communication = getRandomNumber(1, 100);
    employee->teamwork = getRandomNumber(1, 100);
    employee->creativity = getRandomNumber(1, 100);
}

// Function to initialize a department with employees
void initializeDepartment(Department *department, char names[][20]) {
    // List of department names
    char departmentNames[NUM_DEPARTMENTS][20] = {"HR", "Finance", "Marketing", "Logistics"};

    strcpy(department->departmentName, departmentNames[NUM_DEPARTMENTS - 1]);

    // Shuffle the department names
    int i, j; // Declare i and j outside the loop
    for (i = NUM_DEPARTMENTS - 1; i > 0; i--) {
        j = rand() % (i + 1);
        char temp[20];
        strcpy(temp, departmentNames[i]);
        strcpy(departmentNames[i], departmentNames[j]);
        strcpy(departmentNames[j], temp);
    }

    // Initialize employees in the department
    for (i = 0; i < MAX_EMPLOYEES; i++) {
        initializeEmployee(&department->employees[i], names);
    }
}

// Function to compute the sum of values for a department
int computeDepartmentSum(Department *department) {
    int i, sum = 0;
    for (i = 0; i < MAX_EMPLOYEES; i++) {
        sum += department->employees[i].communication +
               department->employees[i].teamwork +
               department->employees[i].creativity;
    }
    return sum;
}

// Function to print department details
void printDepartmentDetails(Department *department) {
    printf("\n%s Department:\n", department->departmentName);
    printf("%-20s%-20s%-15s%-15s%-15s\n", "Name", "Role", "Communication", "Teamwork", "Creativity");

    int i;
	for (i = 0; i < MAX_EMPLOYEES; i++) {
        Employee *employee = &department->employees[i];
        printf("%-20s%-20s%-15d%-15d%-15d\n", employee->name, employee->role,
               employee->communication, employee->teamwork, employee->creativity);
    }
}

int main() {
    srand(time(NULL));

    // Initial pool of names
    char names[NUM_NAMES][20] = {"Alice", "Bob", "Charlie", "David", "Emma", "Frank", "Grace", "Harry",
                                 "Ivy", "Jack", "Katherine", "Liam", "Mia", "Noah", "Olivia", "Peter",
                                 "Quinn", "Rachel", "Samuel", "Sophia"};

    // Shuffle the names
    int i,j;
	for (i = NUM_NAMES - 1; i > 0; i--) {
        j = rand() % (i + 1);
        char temp[20];
        strcpy(temp, names[i]);
        strcpy(names[i], names[j]);
        strcpy(names[j], temp);
    }

    // Initialize departments
    Department departments[NUM_DEPARTMENTS];
   
    for (i = 0; i < NUM_DEPARTMENTS; i++) {
        initializeDepartment(&departments[i], names);
    }

    // Compute sum of values for each department
    int departmentSums[NUM_DEPARTMENTS];
    for (i = 0; i < NUM_DEPARTMENTS; i++) {
        departmentSums[i] = computeDepartmentSum(&departments[i]);
    }

    // Find the index of the best department
    int bestDepartmentIndex = 0;
    for (i = 1; i < NUM_DEPARTMENTS; i++) {
        if (departmentSums[i] > departmentSums[bestDepartmentIndex]) {
            bestDepartmentIndex = i;
        }
    }

    // Print department details
    for (i = 0; i < NUM_DEPARTMENTS; i++) {
        printDepartmentDetails(&departments[i]);
    }

    // Print the winner of the "Best Department" award
    printf("\nBest Department Summary:\n");
    printf("%-20s%-15s\n", "Department", "Total Score");

    for (i = 0; i < NUM_DEPARTMENTS; i++) {
        printf("%-20s%-15d\n", departments[i].departmentName, departmentSums[i]);
    }

    printf("\nBest Department: %s\n", departments[bestDepartmentIndex].departmentName);
    printf("Total Score: %d\n", departmentSums[bestDepartmentIndex]);

    return 0;
}

