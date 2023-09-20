#include <stdio.h>		//global function

int main(){
	
	int n;
	
	printf ("Enter a number: ");
	scanf("%d", &n);
	
	if (n%3==0)
	{
		printf ("%d is a multiple of 3", n);
	} 	else 
	{
		printf ("%d is not a multiple of 3", n);
}	//end if
	
	return 0;
	
}//end main
