#include <stdio.h>

int main(void){
	float x = 0.0f;
	float value = 0.0f;
	
	printf("Enter a value for x:");
	scanf("%f", &x);
	
	value = ((3 * x + 2) * (x - 5) * (x - 1) * (x + 7) * (x - 6));	

	printf("The value of the polynominal for %.2f is %.2f\n", x, value);

	return 0; 
	
}
