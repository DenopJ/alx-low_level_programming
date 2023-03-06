#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - A fucntion that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: first parameter
 * @size: second parameter
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x;
	int sum1 = 0;
	int sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 = sum1 + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		sum2 = sum2 + a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}

