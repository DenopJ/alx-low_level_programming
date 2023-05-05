#include "main.h"
#include <stddef.h>

/**
* binary_to_uint - A function that converts a binary number
* to an unsigned int.
* @b: parameter
*
* Return: the converted number or 0
*/

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int y = 0;

	if (b == NULL)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}

	for (x = 0; b[x] != '\0'; x++)
	{
		y <<= 1;
		if (b[x] == '1')
			y += 1;
	}
	return (y);
}
