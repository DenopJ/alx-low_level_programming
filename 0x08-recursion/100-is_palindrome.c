#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string
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
	if (*(s + x) == *(s + y))
	{
		if (x == y || x == y + 1)
			return (1);
		return (0 + eval(s, x + 1, y - 1));
	}
	return (0);
}

/**
 * is_palindrome - A function that evaluates if a string is palindromic
 * @s: Parameter
 * Return: Always int (Success)
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (eval(s, 0, _strlen_recursion(s) - 1));
}
