#include <stdio.h>
#include <math.h>

int main(void)
{
	float volume, radius;
	
	printf("What is the radius of the sphere in meters? " );
	scanf("%f", &radius);
	
	volume = ((4.0f/3.0f) * M_PI * (radius * radius * radius));
	
	printf("Volume in cubic meters = %.2f\n", volume);

	return 0;
}
