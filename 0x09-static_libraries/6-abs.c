#include "main.h"

/**
 * _abs - A function that computes the absolute value of an integer
 * @n: Parameter to be computed.
 *
 * Return: The absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
