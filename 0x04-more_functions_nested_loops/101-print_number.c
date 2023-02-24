#include "main.h"

/**
 * print_number - A function that prints an integer
 * @n: integer parameter
 *
 */

void print_number(int n)
{
	unsigned int n;

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar(n % 10 + '0');
}
