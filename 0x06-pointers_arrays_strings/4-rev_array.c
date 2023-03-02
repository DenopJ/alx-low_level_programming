#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: Parameter
 * @n: number of elements of the array.
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x, tmp;

	for (x = 0; x < n / 2; x++)
	{
		tmp = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = tmp;
	}
}
