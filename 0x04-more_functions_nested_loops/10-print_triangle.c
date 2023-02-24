#include "main.h"

/**
 * print_triangle - A function that prints a triangle using #
 *
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (x = 1; x <= size; x++)
		for (y = 1; y <= 1; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
}
