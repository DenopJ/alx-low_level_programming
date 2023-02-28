#include "main.h"

/**
 * puts_half - A function that prints half of a string
 * @str: String parameter
 * Return: void
 */

void puts_half(char *str)
{
	int x = 0, n;

	while (str[x] != '\0')
		x++;

	if (x + 1 % 2 != '0')
		n = (x - 1) / 2;

	else
		n = (x / 2);
		n++;

	for (x = n; str[x] != '\0'; x++)
	_putchar(str[x]);

	_putchar('\n');
}
