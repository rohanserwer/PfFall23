#include <stdio.h>

// Structure to store employee information
struct Employee {
    int employee_id;
    char name[50];
    float salary;
};

// Structure to store organization information with nested Employee structure
struct Organization {
    char organisation_name[50];
    char organisation_number[15];
    struct Employee emp;
};

int main() {
    // Create an instance of the Organization structure
    struct Organization org;

    // Set values for the data members
    org.emp.employee_id = 127;
    snprintf(org.emp.name, sizeof(org.emp.name), "Linus Sebastian");
    org.emp.salary = 400000;

    snprintf(org.organisation_name, sizeof(org.organisation_name), "NU-Fast");
    snprintf(org.organisation_number, sizeof(org.organisation_number), "NUFAST123ABC");

    // Output the requested data
    printf("The size of structure organization: %zu\n", sizeof(struct Organization));
    printf("Organisation Name: %s\n", org.organisation_name);
    printf("Organisation Number: %s\n", org.organisation_number);
    printf("Employee id: %d\n", org.emp.employee_id);
    printf("Employee name: %s\n", org.emp.name);
    printf("Employee Salary: %.2f\n", org.emp.salary);

    return 0;
}

