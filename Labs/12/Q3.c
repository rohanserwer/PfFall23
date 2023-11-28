/*
Programmer: Rohan Serwer
Desc: Store, print and save the GPA database to a text file 
Date: 28-Nov-2023

*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_COURSES 50

// Structure to store information about a course
struct Course {
    char code[20];
    char name[50];
    float gpa;
    int semester;
    int creditHours;
};

// Function to input course information
void inputCourse(struct Course *course) {
    printf("Enter Course Code: ");
    scanf("%s", course->code);

    printf("Enter Course Name: ");
    scanf(" %[^\n]s", course->name);

    printf("Enter GPA: ");
    scanf("%f", &course->gpa);

    printf("Enter Semester: ");
    scanf("%d", &course->semester);

    printf("Enter Credit Hours: ");
    scanf("%d", &course->creditHours);
}

// Function to save course data to a file
void saveToFile(struct Course courses[], int numCourses) {
    FILE *file = fopen("transcript.txt", "w");

    if (file == NULL) {
        fprintf(stderr, "Error opening file for writing\n");
        exit(EXIT_FAILURE);
    }

    fprintf(file, "Course Code\tCourse Name\tGPA\tSemester\tCredit Hours\n");

    int i;
	for (i = 0; i < numCourses; ++i) {
        fprintf(file, "%s\t%s\t%.2f\t%d\t%d\n",
                courses[i].code, courses[i].name, courses[i].gpa,
                courses[i].semester, courses[i].creditHours);
    }

    fclose(file);
}

// Function to view the transcript
void viewTranscript(struct Course courses[], int numCourses) {
    printf("Transcript:\n");
    printf("Course Code\tCourse Name\tGPA\tSemester\tCredit Hours\n");

    int i;
	for (i = 0; i < numCourses; ++i) {
        printf("%s\t%s\t%.2f\t%d\t%d\n",
                courses[i].code, courses[i].name, courses[i].gpa,
                courses[i].semester, courses[i].creditHours);
    }
}

// Function to calculate CGPA
float calculateCGPA(struct Course courses[], int numCourses) {
    float totalGradePoints = 0;
    int totalCreditHours = 0;

    int i;
	for (i = 0; i < numCourses; ++i) {
        totalGradePoints += courses[i].gpa * courses[i].creditHours;
        totalCreditHours += courses[i].creditHours;
    }

    return totalGradePoints / totalCreditHours;
}

// Function to calculate SGPA
float calculateSGPA(struct Course courses[], int numCourses, int semester) {
    float totalGradePoints = 0;
    int totalCreditHours = 0;

    int i;
	for (i = 0; i < numCourses; ++i) {
        if (courses[i].semester == semester) {
            totalGradePoints += courses[i].gpa * courses[i].creditHours;
            totalCreditHours += courses[i].creditHours;
        }
    }

    return totalGradePoints / totalCreditHours;
}

int main() {
    struct Course courses[MAX_COURSES];
    int numCourses = 0;

    int option;

    do {
        printf("\nOptions:\n");
        printf("1. Input Course Information\n");
        printf("2. Save to File\n");
        printf("3. View Transcript\n");
        printf("4. Calculate CGPA\n");
        printf("5. Calculate SGPA\n");
        printf("0. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                if (numCourses < MAX_COURSES) {
                    inputCourse(&courses[numCourses]);
                    numCourses++;
                } else {
                    printf("Maximum number of courses reached.\n");
                }
                break;
            case 2:
                saveToFile(courses, numCourses);
                printf("Data saved to transcript.txt\n");
                break;
            case 3:
                viewTranscript(courses, numCourses);
                break;
            case 4:
                printf("CGPA: %.2f\n", calculateCGPA(courses, numCourses));
                break;
            case 5:
                {
                    int semester;
                    printf("Enter semester to calculate SGPA: ");
                    scanf("%d", &semester);
                    printf("SGPA for semester %d: %.2f\n", semester, calculateSGPA(courses, numCourses, semester));
                }
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
    } while (option != 0);

    return 0;
}

