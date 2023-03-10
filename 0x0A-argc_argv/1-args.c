#include <stdio.h>

/**
 * main - A function that prints the number of arguments passed into it.
 * @argc: first parameter
 * @argv: second parameter
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
