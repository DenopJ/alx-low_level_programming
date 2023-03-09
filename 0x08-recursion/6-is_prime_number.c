#include "main.h"

/**
 * eval - A fucntion that evaluates input int as prime number
 * @x: firsrt parameter
 * @y: second parameter
 * Return: Always int (Success)
 */

int eval(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	if (x > y / 2)
		return (1);
	else
		return (eval(x + 1, y));
}

/**
 * is_prime_number - Fucntion returns 1 if the input integer is a prime number
 * @n: Parameter
 * Return: Always int (Success)
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (eval(2, n));
}
