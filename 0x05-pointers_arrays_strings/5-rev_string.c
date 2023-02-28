#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: String input
 * Return: Reverse string
 */

void rev_string(char *s)
{
	int a = 0
	int b;
	int c;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}

	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}

