#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to bit
 * @index: index starts from 0
 *
 * Return: 1 (successful) || -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n ^= (1 << index);

	return (1);
}
