#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: Parameter (string)
 *
 * Return: pointer to the duplicated string
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *ptr;
	int x, y;

	if (str == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
		x++;

	ptr = (char *)malloc(sizeof(char) * (x + 1));

	if (ptr == NULL)
		return (NULL);

	y = 0;
	for (y = 0; str[y]; y++)
		ptr[y] = str[y];

	return (ptr);
}
