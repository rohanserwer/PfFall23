#include <stdio.h>
int main (){
	
	char a;
	
	printf ("Enter the character: ");
	scanf (" %c", &a);
	
	if (a >= 'a' && a <= 'z' )
	{
		printf ("It is a small alphabet");
	} else if (a >= 'A' && a <= 'Z' )
	{
		printf ("It is a capital alphabet");
	} else if (a >= '0' && a <= '9' )
	{
		printf ("It is a digit");
	}else 
	{
		printf ("It is a special character");
	}//end if else
	
	
	return 0;
}//end main
