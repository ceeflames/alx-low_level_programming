#include "main.h"

/**
 * main - function that copies the content of a file to another file
 * @argc: Takes argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, st1, st2;
	char buffer[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IWGRP | S_IROTH;
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file _to\n"),exit(97);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]), exit (99);
	
	do {
		st1 = read(fd1, buffer, MAXSIZE);
		if (st1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (st1 > 0)
		{
			st2 = write(fd2, buffer, (ssize_t) st1);
			if (st2 == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
	}
	while (st1 > 0);
	st1 = close(fd1);
	if (st1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	st2 = close(fd2);
	if (st2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}


	return (0);
}
