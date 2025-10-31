#include <stdio.h>

int main(void){
	float x = 0.0f;
	float value = 0.0f;
	
	printf("Enter a value for x:");
	scanf("%f", &x);
	
	value = ((3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (1 * (x * x)) + (7 * (x)) - 6);
	
	printf("The value of the polynominal for %.2f is %.2f\n", x, value);

	return 0; 
	
}
