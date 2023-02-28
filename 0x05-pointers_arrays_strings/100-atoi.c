#include "main.h"

/**
 * _atoi - A function that converts a string to an integer.
 * @s: The pointer to convert
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int x = 0;
	int y = 1;
	int z = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			y *= -1;
		}

		while (s[a] >= 48 && s[a] <= 57)
		{
			z = 1;
			x = (x * 10) + (s[a] - '0');
			a++;
		}

		if (z == 1)
		{
			break;
		}

		a++;
	}

	x *= y;
	return (x);
}
