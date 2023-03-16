#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first parameter
 * @s2: secound parameter
 * @n: number of bytes
 *
 * Return: pointer, return NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z;
	char *ptr;

	if (s1 == NULL)
		x = 0;
	else
	{
		for (x = 0; s1[x]; ++x)
		;
	}

	if (s2 == NULL)
		y = 0;
	else
	{
		for (y = 0; s2[y]; ++y)
		;
	}

	if (y > n)
		y = n;

	ptr = malloc(sizeof(char) * (x + y + 1));

	if (ptr == NULL)
		return (NULL);

	for (z = 0; z < x; z++)
		ptr[z] = s1[z];

	for (z = 0; z < y; z++)
		ptr[z + x] = s2[z];

	ptr[x + y] = '\0';

	return (ptr);
}
