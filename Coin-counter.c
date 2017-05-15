#include <stdio.h>


int main(){
	int pennies,quarters,nickels, dimes;
	float difference, cost, money;
	printf("Enter the cost of the item: ");
	scanf("%f", &cost);
	printf("\nEnter the amount of money you have: ");
	scanf("%f", &money);
	if (money>cost)
	 {
		difference = money - cost;
		quarters = difference / .25;
		dimes = (difference - .25*quarters)/.10;
		nickels = (difference - .25*quarters - .10*dimes) / .5;
		pennies = (difference - .25*quarters - .1*dimes - .5*nickels) / .01;
		printf("\nThe total amount of quarters: %i", quarters);
		printf("\nThe total amount of dimes : %i", dimes);
		printf("\nThe total amount of nickels: %i", nickels);
		printf("\nThe total amount of pennies: %i\n", pennies);
				}
	else {
		 printf("\nInsufficient funds.");
	 }
	
}