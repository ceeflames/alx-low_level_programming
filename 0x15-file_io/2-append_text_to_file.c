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
	int fd, i;
	
	if (filename == NULL)
		return (-1);

	fd = open(filename, "a");
	
	if (text_content)
	{
		for (i = 0; i < text_content; i++);
	}

	close(fd);
	return (1);
}
