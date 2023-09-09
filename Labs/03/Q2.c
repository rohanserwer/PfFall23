#include<stdio.h>

int main(){
	
	float h, l , w;
	float vol;
	
	printf ("Enter the height of the ball container: ");
	scanf ("%f", &h);

	printf ("Enter the length of the ball container: ");
	scanf ("%f", &l);	

	printf ("Enter the width of the ball container: ");
	scanf ("%f", &w);
	
	vol = h*l*w;
	
	printf ("\nThe volume of the ball container is: %.2f", vol);
	
	return 0;
}