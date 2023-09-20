#include <stdio.h>		//global function

int main(){
	
	int hr, min; 
	
	printf ("Enter the time from 5 to 24 (in ##:## format): ");
	scanf ("%d:%d", &hr, &min);
	
	if (hr>=5 && hr <=11 && min>=0 && min<=60)
	{
		printf ("Good Morning");	
	}
	else if (hr>=12 && hr <18 && min>=0 && min<=60)
	{
		printf ("Good Evening");	
	}
	else if (hr>=18 && hr <=24 && min>=0 && min<=60)
	{
		printf ("Good Night");	
	}
	else 
	{
		printf ("Invalid input. ");
	} //end if
		
	return 0;
	
}//end main
