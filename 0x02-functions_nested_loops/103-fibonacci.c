#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long F1 = 0;
	unsigned long F2 = 1;
	unsigned long Fsum;
	float tot_sum;

	while (1)
	{
		Fsum = F1 + F2;
		if (Fsum > 4000000)
			break;

		if ((Fsum % 2) == 0)
			tot_sum += Fsum;

		F1 = F2;
		F2 = Fsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
