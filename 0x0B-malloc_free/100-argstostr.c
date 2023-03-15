#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function that concatenates all the arguments of your program.
 * @ac: first parameter
 * @av: second parameter
 *
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *ptr, *p;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		p = av[i];
		j = 0;

		while (p[j++])
			len++;
		len++;
	}

	ptr = (char *) malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		p = av[i];
		k = 0;

		while (p[k])
		{
			ptr[j] = p[k];
			k++;
			j++;
		}
		ptr[j++] = '\n';
	}
	ptr[j] = '\0';

	return (ptr);
}
