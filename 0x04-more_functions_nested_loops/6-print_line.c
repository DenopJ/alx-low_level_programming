#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal.
 * @n: number of times to print _
 *
 * Return: void
 */


void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
