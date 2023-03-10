#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: first parameter
 * @c: second parameter
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
		return (s);

	return ('\0');
}
