#include<stdio.h>
#include<math.h>

int main(){
	
	float a, b, hyp;
	
	printf ("Enter the first side of the triangle: ");
	scanf ("%f", &a);

	printf ("Enter the second side of the triangle: ");
	scanf ("%f", &b);	
	
	hyp = sqrt ((a*a) + (b*b));
	
		printf ("\nThe hypotenuse (c) of the triangle is: %.1f", hyp);
	
	return 0;
}