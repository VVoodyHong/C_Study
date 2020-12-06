#include <stdio.h>

int main()
{
	int num, i, left;
	float value1 = 0;
	float value2 = 0;

	printf("Enter a number of terms:\n");
	scanf("%d", &num);

	for(i = 1; i <= num; i++)
	{
		value1 += 1.0 / i;
		left = i % 2;
		if (left == 1)
		{
			value2 += 1.0 / i;
		}
		else
		{
			value2 += -1.0 / i;
		}
	}
	printf("1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ... + 1.0+ %d.0 = %f\n", num, value1);
	printf("1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ... +(or -) 1.0+ %d.0 = %f\n", num, value2);
	return 0;
}