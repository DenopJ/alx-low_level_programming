#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: input string.
 * Return: char
 */

char *string_toupper(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] >= 'a' && s[x] <= 'z')
		{
			s[x] = s[x] - 'a' + 'A';
		}
		x++;
	}
	return (s);
}
