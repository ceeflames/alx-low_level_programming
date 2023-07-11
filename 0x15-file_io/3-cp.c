#include "main.h"

/**
 * _createbuffer - allocates bytes
 * @file: file name
 *
 * Return: ptr to allocated buffer
 */
char *_createbuffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - closes fildes
 * @fildes: the fd to be closed
 */
void close_file(int fildes)
{
	int cl;

	cl = close(fildes);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fildes);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (successful)
 */
int main(int argc, char *argv[])
{
	int i, j, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = _createbuffer(argv[2]);
	i = open(argv[1], O_RDONLY);
	rd = read(i, buff, 1024);
	j = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0654);
	do {
		if (i == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wr = write(j, buff, 1024);
		if (j == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rd = read(i, buff, 1024);
		j = open(argv[2], O_WRONLY | O_APPEND);
	}

	while (rd > 0);

	free(buff);
	close_file(i);
	close_file(j);

	return (0);
}

