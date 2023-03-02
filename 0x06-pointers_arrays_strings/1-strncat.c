#include "main.h"

/**
 * _strncat - concatenates two strings
 * it will use at most n bytes from src
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int x,
	int y;

	x = 0;

	while (dest[x] != '\0')
	{
		i++;
	}

	y = 0;

	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}

