#include "main.h"

/**
* get_endianness - A function that checks the endianness
*
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	int x;
	char *ptr;

	x = 1;
	ptr = (char *) &x;
	return (*ptr);
}
