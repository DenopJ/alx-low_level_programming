#include <stdio.h>
#include "main.h"

/**
 * check_file - A function that checks if files can be opened.
 * @file_from: first argument
 * @file_to: second argument
 * @argv: last argument
 *
 * Return: void
 */

void check_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Function copies the content of a file to another file.
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, cf;
	ssize_t n, w;
	char arr[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_file(file_from, file_to, argv);

	n = 1024;
	while (n == 1024)
	{
		n = read(file_from, arr, 1024);
		if (n == -1)
			check_file(-1, 0, argv);
		w = write(file_to, arr, n);
		if (w == -1)
			check_file(0, -1, argv);
	}

	cf = close(file_from);
	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	cf = close(file_to);
	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
