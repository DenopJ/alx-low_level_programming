#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char alpha;

	while (x++ <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
