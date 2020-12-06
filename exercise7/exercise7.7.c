#include <stdio.h>

int main()
{
	float hours, over_hours, gross_pay, taxes, net_pay;

	printf("Enter number of hours wirked in a week:\n");
	scanf("%f", &hours);

	if (hours <= 40)
	{
		gross_pay = hours * 10;
		taxes = gross_pay * 0.15;
		net_pay = gross_pay - taxes;
	}

	else
	{
		over_hours = hours - 40;
		gross_pay = hours * 10 + over_hours * 15;
		taxes = gross_pay * 0.15;
		net_pay = gross_pay - taxes;
	}

	printf("For %.1f hours, Your gross pay is $%.2f, your taxes is $%.2f, your net pay is $%.2f.\n", hours, gross_pay, taxes, net_pay);

}