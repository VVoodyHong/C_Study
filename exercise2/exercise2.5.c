#include <stdio.h>

void print_br();
void print_ic();

int main()
{
	print_br();
	printf(", ");
	print_ic();
	printf("\n");
	print_ic();
	printf(",");
	printf("\n");
	print_br();
	
	return 0;
}

void print_br()
{
	printf("Brazil, Russia");
}
void print_ic()
{
	printf("India, China");
}