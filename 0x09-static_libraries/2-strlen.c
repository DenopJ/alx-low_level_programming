#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: String parameter
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
