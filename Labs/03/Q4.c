#include<stdio.h>

int main(){
	
	float price, discount, saleprice, PriceAfterDiscount;
	
	printf ("Enter the original price: ");
	scanf ("%f", &price);

	printf ("Enter the discount offer (in %%): ");
	scanf ("%f", &discount);	
	
	PriceAfterDiscount = price * (discount/100);
	saleprice = price - PriceAfterDiscount;
	
		printf ("The sale price is:  %.2f", saleprice);
	
	
	return 0;
}