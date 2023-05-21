#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to be created
 * @text_content: null terminator string to write to the file
 *
 * Return: 1 (successfull) || -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fildes, i, st;

	if (filename == NULL)
		return (-1);

	fildes = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fildes == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i];)
		       	i++;
	}
		st = write(fildes, text_content, i);
		if (st == -1)
			return (-1);

	close(fildes);

	return (1);
}
