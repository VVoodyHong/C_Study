#include <stdio.h>
#define STOP '#'

int main()
{
	char ch;
	int count = 0;

	printf("Enter your characters\n");
	while ((ch = getchar()) != STOP)
	{
		switch (ch)
		{
			case '.' :
				printf("!");
				count++;
				continue;
			case '!' :
				printf("!!");
				count++;
				break;

			default: printf("%c", ch);

		}
	}
	printf("\n");


	printf("It has made %d substituions.\n", count);

	return 0;
}