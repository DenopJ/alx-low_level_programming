#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings
 * @separator: string to be printed
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}

	printf("\n");
	va_end(list);
}
