#include "main.h"
#include <stdlib.h>

/**
 * create_array - A fucntion that creates an array of chars
 * @size: first parameter
 * @c: second parameter
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		arr[x] = c;

	return (arr);
}
