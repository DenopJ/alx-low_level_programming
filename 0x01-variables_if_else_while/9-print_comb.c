#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		for (x = i; x < 10; x++)
		{ putchar(i + '0');
		putchar(x + '0');
		if (i != 9 || x != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
