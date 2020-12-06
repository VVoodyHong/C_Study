#include <stdio.h>

int main()
{
	int years;
	float account, earn, left;

	account = 100;
	years = 0;

	while (account > 0)
	{
		earn = account + account * 0.08;
		left = earn - 10;
		account = left;
		years++;
	}
	printf(" Chukies's account will empty after %d years.\n", years);
}