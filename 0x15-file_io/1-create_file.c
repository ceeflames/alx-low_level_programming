#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: Name of the file to create
 * @text_content: NULL terminated str to write to the file
 *
 * Return: 1 (successful) || -1 (fialure)
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);
	close(op);

	return (1);

}
