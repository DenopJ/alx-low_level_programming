#include "main.h"

/**
* clear_bit - A function that sets the value of a bit to 0 at a given index.
* @n: first parameter
* @index: second parameter
*
* Return: 1 on success, -1 if it failed.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index >= 64)
		return (-1);

	x = ~(1 << index);
	*n = *n & x;

	return (1);
}
