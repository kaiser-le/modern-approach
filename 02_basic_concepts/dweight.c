#include <stdio.h>

//macro definition
#define INCHES_PER_POUD 166

int main(void)
{
	int height, length, width, volume, weight;

	scanf("%d %d %d", &length, &width, &height);
	volume = length * width * height;
	weight = (volume + INCHES_PER_POUD - 1) / INCHES_PER_POUD;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);

	return 0;
}