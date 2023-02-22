#include <stdio.h>

/**
 * print_to_98 - A function that prints all natural numbers from input to 98
 * @n: Parameter to begin with
 */

void print_to_98(int n)
{
	int x;

	for (x = n; x < 98; x++)
	{
		printf("%d, ", x);
	}

		printf("%d\n", 98);
}
