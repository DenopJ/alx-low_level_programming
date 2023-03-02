#include "main.h"

/**
  * print_number - A function that prints any integer with putchar
  * @n: Parameter
  * Return: void
  */

void print_number(int n)
{
	unsigned int a;

	a = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (a / 10 != 0)
		print_number(a / 10);

	_putchar((a % 10) + '0');
}
