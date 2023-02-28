#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: String input
 * Return: Reverse string
 */

void rev_string(char *s)
{
	int x = 0, y, z;
	char d;

	while (s[x] != '\0')
	{
		x++;
	}

	z = x - 1;
	for (y = 0; z >= 0 && y < z; z--, y++)
	{
		d = s[y];
		s[y] = s[z];
		s[z] = d;
	}
}

