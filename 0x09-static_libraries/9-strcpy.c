#include "main.h"

/**
 * _strcpy - A function that copies the string pointed to by src to dest
 * @dest: Parameter to check
 * @src: Parameter to check
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}
