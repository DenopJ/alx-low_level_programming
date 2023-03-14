#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function returns a pointer to a 2D array of integers.
 * @width: first parameter(rows).
 * @height: second parameter(column)
 *
 * Return: pointer to 2D array of integers
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **ptr;

	if (width < 1 || height < 1)
		return (NULL);

	ptr = (int *) malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ptr[x] = (int *) malloc(width * sizeof(int));
		if (ptr[x] == NULL)
		{
			for (i--; x >= 0; x--)
				free(ptr[x]);
			free(ptr);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			ptr[x][y] = 0;

	return (ptr);
}
