#include <stdio.h>

/**
 * main - A function that prints all arguments it receives.
 * @argc: first parameter
 * @argv: second parameter
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

