 #include "main.h"

/**
 * binary_to_unit - function that converts a binary number to an unsigned int
 * @b: Pointer to string of 0 and 1 chars
 *
 * Return: converted number || 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		j <<= 1;
		j += b[i] - '0';
		i++;
	}
	return (j);
}
