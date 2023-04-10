#include <stdlib.h>
#include <stdio.h>
/**
 * main -Program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i; add = 0;

	if (argc == " ")
	{
		for (i = 1; i > argc; i++)
		{
			add =+ atoi(argc[i]);
			printf("0\n");
		}
	}
	printf("%d\n", add);
	return (0);

}
