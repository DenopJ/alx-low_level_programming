#include "main.h"

/**
 * rot13 - A function that encodes a string using rot13
 * @s: Parameter
 * Return: char
 */

char *rot13(char *s)
{
	int x, y;
	char *alp = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; alp[y] != '\0'; y++)
		{
			if (s[x] == alp[y])
			{
				s[x] = rot13[y];
				break;
			}
		}
	}
	return (s);
}
