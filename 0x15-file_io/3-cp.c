#include "main.h"
/**
 * check100 - checks FD closed properly
 * @ck: checks for error
 * @fd: file descriptor
 *
 * Return: void
 */
void check100(int ck, int fd)
{
	if (ck == -1) /* failure */
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * check99 - check if file_to created && || written to
 * @ck: check for failure
 * @file_to: Name of file_to
 * @fd_from: fd of file_from || -1
 * @fd_to: fd of file_to || -1
 *
 * Return: void
 */
void check99(ssize_t ck, char *file_to, int fd_from, int fd_to)
{
	if (ck == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check98 - check if file_from exists and can be read
 * @ck: check for failure
 * @file_from: Name of file_from
 * @fd_from: fd of file_from || -1
 * @fd_to: fd of file_to || -1
 *
 * Return: void
 */
void check98(ssize_t ck, char *file_from, int fd_from, int fd_to)
{
	if (ck == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check97 - checks for the correct number of arguments
 * @argc: number of arguments
 *
 * Return: void
 */
void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * main - copies the content of a file to another file
 * @argv: arr of pointers to the arguments
 * @argc: number of arguments passed
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t len1, len2;
	char buffer[MAXSIZE];
	mode_t mode;

	check97(argc);
	fd_from = open(argv[1], O_RDONLY);

	check98((ssize_t)fd_from, argv[1], -1, -1);
	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);

	check99((ssize_t)fd_to, argv[2], fd_from, -1);
	len1 = MAXSIZE;
	while (len1 == MAXSIZE)
	{
		len1 = read(fd_from, buffer, MAXSIZE);
		check98(len1, argv[1], fd_from, fd_to);
		len2 = write(fd_to, buffer, len1);
		if (len2 != len1)
			len2 = -1;
		check99(len2, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	check100(close_to, fd_to);
	check100(close_from, fd_from);

	return (0);
}
