#include <stdio.h>
/**
 * main - Entry point
 * A program that prints alphabeth in lowercase except q and e
 * Return: Alwyas 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
