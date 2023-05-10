#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * to the POSIX standard output.
 * @filename: pointer to that filename
 * @letters: number of letters to read and print
 *
 * Return: 0 Always
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	o = open(filename, O_RDWR);
	if (o == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (r == -1 || w == -1 || w != r)
		return (0);
	free(buffer);

	close(o);
	return (0);
}
