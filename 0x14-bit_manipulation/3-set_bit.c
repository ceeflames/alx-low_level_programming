#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at index
 * @n: int pointer to the number
 * @index: index of bit
 *
 * Return: 1 (successfull) || -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);

}
