#include "main.h"

/**
* print_rev - A function that prints a string in reverse
* @s: String parameter
* Return: void
*/

void print_rev(char *s)
{
	int x, y;

	y = 0;

	while (*s != '\0')
		y++;
		s++;

	for (x = y; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
