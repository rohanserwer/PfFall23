#include<stdio.h>

//--Global variables--//

int main()
{
	
	int n;
	char letter; 
  char c[10] = {0}; //declaring a character array for inputs
  int i = 0;
  printf("enter the number of letters you want to enter (<10): ");
	int x = n;
	scanf("%d",&n);
  while(i<n) //entering elements to our array
  {
  	printf("\nEnter character %d: ",i+1);
  	scanf("%c",&letter);
  	c[i]= letter;
  	i = i+1;
  }
  
  i = 0;
  while(i<n/2) //checks if the elements of the array form a palindrome or not
  {
  	if(c[i]==c[x-1])
  	{
		i = i+1;
		x = n-1;
		
	  }
	  
	else
	printf("Not a palindrome");
  }
  printf("it's a palindrome");
   
}
