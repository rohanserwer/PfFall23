/*
Programmer: Rohan Serwer
Desc: Roll number, Name, Department, Course, Year
Date: 21-Nov-2023

*/
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 450

// Structure to specify student data
struct Student {
    int rollNumber;
    char name[50];
    char department[50];
    char course[50];
    int yearOfJoining;
};

// Function to print names of students who joined in a particular year
void printStudentsByYear(struct Student students[], int numStudents, int targetYear) {
    printf("Students who joined in %d:\n", targetYear);
    int i;
	for (i = 0; i < numStudents; ++i) {
        if (students[i].yearOfJoining == targetYear) {
            printf("%s\n", students[i].name);
        }
    }
}

// Function to print data of a student based on roll number
void printStudentByRollNumber(struct Student students[], int numStudents, int targetRollNumber) {
        int i;
	for ( i = 0; i < numStudents; ++i) {
        if (students[i].rollNumber == targetRollNumber) {
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].yearOfJoining);
            return;
        }
    }
    printf("Student with Roll Number %d not found.\n", targetRollNumber);
}

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents;

    // Input data for students
    printf("Enter the number of students (up to %d): ", MAX_STUDENTS);
    scanf("%d", &numStudents);

    printf("Enter student details:\n");
        int i;
	for (i = 0; i < numStudents; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Department: ");
        scanf("%s", students[i].department);
        printf("Course: ");
        scanf("%s", students[i].course);
        printf("Year of Joining: ");
        scanf("%d", &students[i].yearOfJoining);
    }

    // Print names of students who joined in a particular year
    int targetYear;
    printf("Enter the year to search for students: ");
    scanf("%d", &targetYear);
    printStudentsByYear(students, numStudents, targetYear);

    // Print data of a student based on roll number
    int targetRollNumber;
    printf("Enter the roll number to search for a student: ");
    scanf("%d", &targetRollNumber);
    printStudentByRollNumber(students, numStudents, targetRollNumber);

    return 0;
}

