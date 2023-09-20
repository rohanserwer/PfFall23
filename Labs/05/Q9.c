#include <stdio.h>	//global function
#include <math.h>	//function for mathematical operations (such as sqrt)

int main() {
    double a, b, c;
    double disc, root1, root2;

    // Input coefficients from the user
    printf("Enter coefficient a: ");
    scanf("%lf", &a);
    printf("Enter coefficient b: ");
    scanf("%lf", &b);
    printf("Enter coefficient c: ");
    scanf("%lf", &c);

    // Calculate the disc
    disc = b * b - 4 * a * c;

    // Check the nature of the roots based on the disc
    if (disc > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (disc == 0) {
        // One real root (repeated)
        root1 = -b / (2 * a);
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-disc) / (2 * a);
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }//end if 

    return 0;
}//end main

