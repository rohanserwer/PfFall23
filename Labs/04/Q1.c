#include<stdio.h>
int main (){
	
	int n;
	int i=1; //i=1 instead of 0 so it prints 4 till n instead of n+1
	
	printf ("Enter n: ");
	scanf ("%d", &n); // n=4
	
	while (i<=n)
	{ int j=1;
		while (j<=i)
	{
		printf ("*");
		j++;
	}
	
	printf ("\n");
	i++;
	} 
		
		
	
	
	
	
	return 0;
}
