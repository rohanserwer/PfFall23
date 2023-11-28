#include <stdio.h>

// Struct definition for Register
struct Register {
    int CourseId;
    char CourseName[50];
};

// Struct definition for Student inheriting from Register
struct Student {
    int StudentId;
    char FirstName[50];
    char LastName[50];
    long long cellno;  // Assuming a long long data type for cellno
    char email[100];
    struct Register reg;  // Variable of Register struct
};

int main() {
    // Declare an array of struct Student for 5 students
    struct Student std[5];

    // Input details for each student
    int i;
	for (i = 0; i < 5; ++i) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("StudentId: ");
        scanf("%d", &std[i].StudentId);

        printf("FirstName: ");
        scanf("%s", std[i].FirstName);

        printf("LastName: ");
        scanf("%s", std[i].LastName);

        printf("Cell Number: ");
        scanf("%lld", &std[i].cellno);

        printf("Email: ");
        scanf("%s", std[i].email);

        printf("CourseId: ");
        scanf("%d", &std[i].reg.CourseId);

        printf("CourseName: ");
        scanf("%s", std[i].reg.CourseName);

        printf("\n");
    }

    // Print details of each student
    printf("Details of 5 Students:\n");
    for (i = 0; i < 5; ++i) {
        printf("Student %d:\n", i + 1);
        printf("StudentId: %d\n", std[i].StudentId);
        printf("FirstName: %s\n", std[i].FirstName);
        printf("LastName: %s\n", std[i].LastName);
        printf("Cell Number: %lld\n", std[i].cellno);
        printf("Email: %s\n", std[i].email);
        printf("CourseId: %d\n", std[i].reg.CourseId);
        printf("CourseName: %s\n", std[i].reg.CourseName);
        printf("\n");
    }

    return 0;
}

