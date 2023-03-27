#include "main.h"
/**
 * swap_int - function that swaps values of two integers.
 * @a: integer one
 * @b: integer two
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
