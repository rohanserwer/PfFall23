#include<stdio.h>
int main (){
	
	int n;
	int i=1; 
	
	printf ("Enter n: ");
	scanf ("%d", &n); 
	
	while (i<=n)
	{ int j=1;
	
	while (j<=n) //same as Q1 but now we run j until nth value
	{printf ("*");
		
	j++;
	}
	printf ("\n");

	i++;
	} 
		
		
	
	
	
	
	return 0;
}
