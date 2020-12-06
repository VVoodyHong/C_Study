#include <stdio.h>

int main()
{
	int row, space;
	char ch, ch1, ch2;

	scanf("%c", &ch);

	for (row = 0; row < ch - 'A' + 1; row++)
	{
		for (space = 0; space < ch - 'A' - row; space++)
		{
			printf(" ");
		}
		for (ch1 = 'A'; ch1 <= 'A' + row; ch1++)
		{
			printf("%c", ch1);
		}
		for (ch2 = 'A' + row - 1; ch2 >= 'A'; ch2--)
		{
			printf("%c", ch2);
		}
	printf("\n");
	}
}