#include "main.h"

/**
 * rot13 - A function that encodes a string using rot13
 * @s: Parameter
 * Return: char
 */

char *rot13(char *s)
{
	char *c = s;

	while (*c)
	{
		if ((*c >= 'a' && *c <= 'm') || (*c >= 'A' && *c <= 'M'))
			*c += 13;
		else if ((*c >= 'n' && *c <= 'z') || (*c >= 'N' && *c <= 'Z'))
			*c -= 13;
		c++
	}
	return (s);
}
