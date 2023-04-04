#include "main.h"
/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: pointer
 * @size: widteh of matrix
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, b, c;
	int d = 0, e = 0;

	for (i = 0; i < size; i++)
	{
		c = (i * size) + i;
		d += *(a + c);
	}
	for (b = 0; b < size; b++)
	{
		p = (b * size) + (size - a - b);
		e += *(a + c);
	}
	printf("%i, %i\n", d, e);
}
