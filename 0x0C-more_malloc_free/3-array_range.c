#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers.
 * @min: first parameter
 * @max: second parameter
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int x;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++, min++)
		ptr[x] = min;

	return (ptr);
}
