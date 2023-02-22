#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	unsigned long F1 = 0, F2 = 1, sum;
	unsigned long F1_H1, F1_H2, F2_H1, F2_H2;
	unsigned long H1, H2;

	for (count = 0; count < 92; count++)
	{
		sum = F1 + F2;
		printf("%lu, ", sum);

		F1 = F2;
		F2 = sum;
	}

	F1_H1 = F1 / 10000000000;
	F2_H1 = F2 / 10000000000;
	F1_H2 = F1 % 10000000000;
	F2_H2 = F2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		H1 = F1_H1 + F2_H1;
		H2 = F1_H2 + F2_H2;
		if (F1_H2 + F2_H2 > 9999999999)
		{
			H1 += 1;
			H2 %= 10000000000;
		}

		printf("%lu%lu", H1, H2);
		if (count != 98)
			printf(", ");

		F1_H1 = F2_H1;
		F1_H2 = F2_H2;
		F2_H1 = H1;
		F2_H2 = H2;
	}
	printf("\n");
	return (0);
}
