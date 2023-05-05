#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: pointer to bit
 * @index: starts from 0
 *
 * Return: 1 (successful) || -1 (Failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n &= ~(1 << index);

	return (1);
}
