#include <stdlib.h>
#include <stdio.h>
/**
 * main - Program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int add = 0, i, num;
	char *ptr;

	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &ptr, 10);
			if (!*ptr)
				add += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", add);
	return (0);
}
