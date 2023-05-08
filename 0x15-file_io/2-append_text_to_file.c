#include "main.h"

/**
* append_text_to_file - A function that appends text at the end of a file
* @filename: first parameter
* @text_content: second parameter
*
* Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, n, w;

	o = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL)
		return (-1);

	if (o == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;
		w = write(o, text_content, n);

		if (w == -1)
			return (-1);
	}
	close(o);
	return (1);
}
