#include <stdio.h>	//global function

int main(){
	
	char ans;
	
	printf ("Are you sure to delete [Y/y] / [N/n]?\n");
	scanf (" %c", &ans);
	
	switch (ans)
	{
		case 'Y':
		printf ("Deleted successfully");
		break;
		
		case 'y':
		printf ("Deleted successfully");
		break;
		
		case 'N':
		printf ("Delete cancelled");
		break;
		
		case 'n':
		printf ("Delete cancelled");
		break;
	
		default:	//end switch
			printf ("Invalid input");
		}
			
	return 0;
	}//end main
