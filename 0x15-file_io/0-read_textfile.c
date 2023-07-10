#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: pointer to the file to read
 * @letters: Number of letters to read and print
 *
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t op, wr, rd;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(op);

	return (wr);

}
