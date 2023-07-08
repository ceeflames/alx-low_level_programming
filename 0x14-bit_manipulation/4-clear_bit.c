#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at index
 * @n: number
 * @index: index
 *
 * Return: 1(successful) || -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
