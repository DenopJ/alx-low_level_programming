#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number.
 * @n: Parameter
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
