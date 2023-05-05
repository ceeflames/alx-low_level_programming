#include "main.h"
/**
 * flip_bits - function that returns the number of bits you need to
 * flip to get from one number to another
 * @n: number of bits
 * @m: number of bit
 * 
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m, bit = 0;

	while (i > 0)
	{
		bit += (i & 1);
		i >>= 1;
	}
	return (bit);
}
