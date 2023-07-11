#include "main.h"
/**
 * main - cpies content of a to another file
 * @ac: number of arguments
 * @av: arguement vector
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int st1, st2, fd1, fd2, rd, wr;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage:cp file_from file_to\n"), exit(97);
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((rd = read(fd1, buffer, 1024)) > 0)
	{
		wr = (write(fd2, buffer, rd));
		if (wr != rd)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	st1 = close(fd1);
	if (st1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	st2 = close(fd2);
	if (st2 == -1)
		dprint(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
	return (0);
}

