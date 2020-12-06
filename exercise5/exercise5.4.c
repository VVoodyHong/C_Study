#include <stdio.h>

int main()
{

	float height, feet, inches;

	printf("Enter a height in centimeters:");
	scanf("%f", &height);

	while (height != 0)
	{
		feet = height / 30.48;
		inches = height / 2.54;

		printf("%f cm = %f feet, %f inches\n", height, feet, inches);

		printf("Enter a height in centimeters (<= 0 to quit)\n");
		scanf("%f", &height);
	}

	printf("bye\n");
	return 0;
}