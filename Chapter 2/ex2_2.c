#include <stdio.h>
#include <math.h>
int main(void)
{
	float volume, radius=10.0f;

	volume = ((4.0f/3.0f) * M_PI * (radius * radius * radius));
	
	printf("Volume = %.2f", volume);

	return 0;
}
