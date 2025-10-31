#include <stdio.h>

int main(void)
{
	float amount;

	printf("Enter an amount: ");
	scanf("%f", &amount);
	
	amount = amount * 1.05;
	
	printf("With tax added: $%.2f\n", amount);

	return 0;
	
}

