#include<stdio.h>

int main(){
	
	float a, b, num;
	char op;
	
	printf ("Enter the first number: ");
	scanf ("%f", &a);

	printf ("Enter the first number: ");
	scanf ("%f", &b);	
	
	 printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
		
		
	
	switch (op)
	{
		case '+': 
		num = a + b;
		printf ("%.2f + %.2f = %.2f", a,b, num);
		break;
		
		case '-': 
		num = a - b;
		printf ("%.2f - %.2f = %.2f", a,b, num);
		break;
		
		case '/': 
		if (b !=0)
		{
			num = a / b;
			printf ("%.2f / %.2f = %.2f", a,b, num);
		}
		else 
		{
			printf ("Division by zero error");
		}
			break;	
		
		case '*': 
		num = a * b;
		printf ("%.2f * %.2f = %.2f", a,b, num);
		break;
	
		default:
			printf ("Invalid opertor.");
		
	}
	
	
	
	
	return 0;
}