#include <stdio.h>

int main(void){
	float loan, rate, payment;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);

	printf("Enter interest rate: ");
	scanf("%f", &rate);

	printf("Enter monthly payment: ");
	scanf("%f", &payment);

	float remaining;
	
	rate = (rate / 100)/12;
	rate = 1 + rate;

	remaining = (loan - payment) * rate;

	printf("Balance remaining after first payment: $%.2f\n", remaining);
	loan = remaining;
	remaining = 0;
	remaining = (loan - payment) * rate;

	printf("Balance remaining after second payment: $%.2f\n", remaining);
	loan = remaining;
	remaining = 0;
	remaining = (loan - payment) * rate;
	
	printf("Balance remaining after third payment: $%.2f\n", remaining); 
	return 0;
}
