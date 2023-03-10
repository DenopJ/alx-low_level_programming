#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that adds positive numbers
 * @argc: first parameter
 * @argv: second parameter
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x, y;
	int sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; argv[x]; x++)
	{
		y = strtol(argv[x], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + y;
		}
	}
	printf("%d\n", sum);

	return (0);
}
