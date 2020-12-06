#include <stdio.h>
#include <stdlib.h>

int main()
{
	const float NUM = 2.54;
	float cm, inch;

	printf("Enter the number of inch:\n");
	scanf("%f", &inch);
	
	cm = inch * NUM;

	printf(" %finch is %.2fcm.\n", inch, cm);

	return 0;
}
