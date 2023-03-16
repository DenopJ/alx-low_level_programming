#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: Parameter (allocated memory)
 *
 * Return: a pointer to the allocated memory
 * if malloc fails, normal process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (i);
}
