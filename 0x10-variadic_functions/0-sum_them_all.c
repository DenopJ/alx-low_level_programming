#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns sum of all its parameters
 * @n: the number of parameters passed
 *
 * Return: Always 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list list;

	va_start(list, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
