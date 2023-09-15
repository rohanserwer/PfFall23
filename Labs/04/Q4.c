#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("Enter the coefficients of the quadratic equation (a, b, c):\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    double disc = b * b - 4 * a * c;
    double X1, X2;

    while (disc < 0) {
        printf("The disc is negative, indicating no real solutions.\n");
        
		//very limited usage, would give variety of answers in if else
        
        printf("Please enter new coefficients (a, b, c):\n");
        printf("a: ");
        scanf("%lf", &a);
        printf("b: ");
        scanf("%lf", &b);
        printf("c: ");
        scanf("%lf", &c);
        disc = b * b - 4 * a * c;
    }

    X1 = (-b + sqrt(disc)) / (2 * a);
    X2 = (-b - sqrt(disc)) / (2 * a);

    printf("The solutions are:\n");
    printf("Root 1: %.2lf\n", X1);
    printf("Root 2: %.2lf\n", X2);

    return 0;
}

