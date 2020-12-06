#include <stdio.h>
#define STOP '#'

int main()
{

	char ch;
	int count = 0;
	int point = 0;

	printf("Enter your characters\n");
	while ((ch = getchar()) != STOP)
	{
		if (ch == 'e')
			point++;
		else if (ch == 'i' && point == 1)
		{
			count++;
			point = 0;
		}
		else
			point = 0;
	}
	printf("\n");


	printf("It has made %d substituions.\n", count);

	return 0;
}
