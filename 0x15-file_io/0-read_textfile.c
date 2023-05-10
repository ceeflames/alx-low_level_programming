#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * to the POSIX standard output.
 * @filename: pointer to that filename
 * @letters: number of letters to read and print
 *
 * Return: 0 (failure) || number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);


	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	o = open(filename, O_RDWR);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		w++;
		return (0);
	}

	free(buffer);

	close(o);
	return (w);
}
