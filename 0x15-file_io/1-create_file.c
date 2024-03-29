#include "main.h"

/**
* create_file - A function that creates a file
* @filename: first parameter
* @text_content: second parameter
*
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int o, n, w;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (o == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	w = write(o, text_content, n);

	if (w == -1)
		return (-1);

	close(o);
	return (1);
}
