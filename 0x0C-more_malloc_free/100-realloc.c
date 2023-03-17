#include "main.h"
#include <stdlib.h>

/**
 * _realloc - A function that reallocates a memory block.
 * @ptr: first parameter
 * @old_size: second parameter
 * @new_size: third parameter
 *
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
