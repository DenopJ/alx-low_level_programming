#include "main.h"
#include <stdlib.h>

/**
 * get_str_len - A function that gets string length
 * @str: Parameter (string)
 *
 * Return: Always 0 (Success)
 */

int get_str_len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)

	return (i + 1);
}

/**
 * str_concat - A fucntion that concatenates two strings.
 * @s1: first parameter
 * @s2: second parameter
 *
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	int x, y;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = get_str_len(s1);
	len2 = get_str_len(s2);

	ptr = (char *) malloc(sizeof(char) * ((len1 + len2) - 1));

	if (ptr == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		ptr[x] = s1[x];

	for (y = 0; s2[y] != '\0'; y++, x++)
		ptr[x] = s2[y];
	ptr[x] = '\0';

	return (ptr);
}
