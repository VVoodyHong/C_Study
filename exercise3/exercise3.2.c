#include <stdio.h>

int main(void)
{
	int ascii_int;
	char ascii_char;

	printf("Enter an ASCII integer: ");
	scanf("%d", &ascii_int);
	printf("ASCII code %d's char is %c\n", ascii_int, ascii_int);
	getchar();

	printf("Enter an ASCII character:");
	scanf("%c", &ascii_char);
	printf("%c's ASCII code is %d.\n", ascii_char, ascii_char);

	return 0;
}