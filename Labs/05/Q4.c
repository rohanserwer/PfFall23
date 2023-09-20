#include <stdio.h>	//global function
int main(){
	
	int a,b, ans;
	char op;
	
	printf ("Enter the first number : ");
	scanf ("%d", &a);
	
	printf ("Enter the second number (except for 0): ");
	scanf ("%d", &b);
	
	printf ("Enter the operator: ");
	scanf (" %c", &op);
	
	switch (op)
	{
		case '+':
		ans = a + b;
		printf ("%d + %d = %d", a,b,ans);
		break;
		
		case '-':
		ans = a - b;
		printf ("%d - %d = %d", a,b,ans);
		break;
		
		case '*':
		ans = a * b;
		printf ("%d * %d = %d", a,b,ans);
		break;
		
		case '/':
		if (b!=0) 
		{
			ans = a / b;
		printf ("%d / %d = %d", a,b,ans);
		
		}
		else
		{
			printf("Division by zero error.");
			
		}
		return 0;
		break;		
				
		default: 	//end switch
			printf ("Invalid operator");
	}
	
	return 0;
	
}//end main
