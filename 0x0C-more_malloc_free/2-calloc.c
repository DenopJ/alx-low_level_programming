#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: first parameter (number of elements)
 * @size: second parameter (bytes)
 *
 * Return: pointer to memory
 * if nmemb or size is 0, returns NULL
 * if malloc fails, returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < (nmemb * size); x++)
		ptr[x] = 0;

	return (ptr);
}
