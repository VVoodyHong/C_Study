#include <stdio.h>
#define STOP '#'

int main()
{
	char ch;
	int count = 0;

	printf("Enter your characters\n");
	while ((ch = getchar()) != STOP)
	{
		if (ch == '.')
		{
			count++;
			putchar('!');
		}
		else if (ch == '!')
		{
			count++;
			putchar('!');
			putchar('!');
		}
		else
			putchar(ch);
	}
	printf("\n");


	printf("It has made %d substituions.\n", count);

	return 0;
}