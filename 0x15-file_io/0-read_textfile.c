#include "main.h"

/**
 * read_textfile - A function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: first parameter
 * @letters: second parameter
 *
 * Return: actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *var;

	var = malloc(sizeof(char) * (letters));

	if (filename == NULL)
		return (0);

	o = open(filename, O_RDONLY);

	if (o == -1)
		return (0);

	if (var == NULL)
		return (0);

	r = read(o, var, letters);
	w = write(STDOUT_FILENO, var, r);

	close(o);

	free(var);

	return (w);
}
