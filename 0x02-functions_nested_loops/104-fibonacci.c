#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	unsigned int prev = 1, curr = 2, next;

	printf("%u, %u, ", prev, curr);

	for (x = 2; x < 98; x++)
	{
		next = prev + prev;
		prev = curr;
		curr = next;
		printf("%u", next);
		if (x != 97)
			printf(", ");
	}
	printf("\n");

	return (0);
}
