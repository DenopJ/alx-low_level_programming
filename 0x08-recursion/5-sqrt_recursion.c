#include "main.h"

/**
 * eval - A function that evaluates square rrot
 * @x: first parameter
 * @y: second parameter
 * Return: Always 0 (Success)
 */

int eval(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (eval(x + 1, y));
}

/**
 * _sqrt_recursion - Fucntion returns the natural square root of a number
 * @n: Parameter
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (eval(1, n));
}
