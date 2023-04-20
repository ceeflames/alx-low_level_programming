#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*o)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	o = get_op_func(argv[2]);

	if (!o)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", o(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
