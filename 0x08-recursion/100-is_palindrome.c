#include "main.h"

/**
 * is_palindrome - A fucntion that evaluates if a string is palindromic
 * @s: Parameter
 * Return: Always int (Success)
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (eval(s, 0, _strlen_recursion(s) - 1));
}


/**
 * _strlen_recursion - A fucntion that returns the length of a string
 * @s: Parameter
 * Return: Always int (Success)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * eval - recursive evaluation of characters for palindrome
 * @s: first parameter
 * @x: second parameter
 * @y: third parameter
 * Return: Always int (Success)
 */

int eval(char *s, int x, int y)
{
	if (*(s + x) != *(s + y - 1))
		return (0)

	if (x >= y)
		return (1);
	else
		return (eval(s, x + 1, y - 1));
}
