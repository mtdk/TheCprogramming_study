#include <stdio.h>

int main(void)
{
//	int height, length, width, volume, weight;
	int height = 8, length = 12, width = 10;
//	height = 8;
//	length = 12;
//	width = 10;
	
//	volume =  height * length * width;
//	
//	weight =  (volume + 165) / 166;
	
	printf("Dimensions: %dx%dx%d\n", length, width, height);
//	printf("Volume (cubic inches): %d\n", volume);
	
	printf("Volume (cubic inches): %d\n", height * length * width);

//	printf("Dimensions: weight (pounds): %d\n", weight);

	printf("Dimensions: weight (pounds): %d\n", (height * length * width + 165) / 166);
	
	return 0;
}
