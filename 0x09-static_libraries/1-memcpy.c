#include "main.h"

/**
 * _memcpy - A function that copies memory area,
 * @dest: first parameter
 * @src: second parameter
 * @n: memeory bytes
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
