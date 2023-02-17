#include <stdio.h>
/**
 * main - Entry point
 * A program that prints the alphabeth in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
