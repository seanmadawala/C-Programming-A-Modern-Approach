#include <stdio.h>

int main(void)
{
	int dollarAmount = 0;
	int twenties, tens, fives, loonies;

	printf("Enter a dollar amount: ");
	scanf("%d", &dollarAmount);
	
	twenties = dollarAmount / 20;
	dollarAmount = dollarAmount - (20 * twenties);
	
	tens = dollarAmount / 10;
	dollarAmount = dollarAmount - (10 * tens);

	fives = dollarAmount / 5;
	dollarAmount = dollarAmount - (5 * fives);

	loonies = dollarAmount / 1;
	dollarAmount = dollarAmount - (1 * loonies);

	printf("$20 bills: %d\n", twenties);
	printf("$10 bills: %d\n", tens);
	printf("$5  bills: %d\n", fives);
	printf("$1  bills: %d\n", loonies);

	return 0;
}

	
