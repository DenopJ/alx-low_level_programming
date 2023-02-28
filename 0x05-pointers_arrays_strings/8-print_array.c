#include <stdio.h>
#include "main.h"

/**
 * print_array - A fucntion that prints n element of an array of integers
 * @a: Parameter to check
 * @n: Parameter to check
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d, *(a + 1));
		if (x != n - 1)
		 printf(", ");
	}
	printf("\n");
}
