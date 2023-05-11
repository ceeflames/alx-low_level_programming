#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of file
 *
 * Return: 1 (succesful) || -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, st;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i]; i++)
		;

	st = write(fd, text_content, i);
	if (st == -1)
		return (-1);

	close(fd);
	return (1);
}
