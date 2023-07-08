#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: number
 * @m: another number
 *
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int cur;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cur = ex >> i;
		if (cur & 1)
			count++;
	}
	return (count);
}
