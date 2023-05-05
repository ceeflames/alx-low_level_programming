#include "main.h"

/**
 * get_endianness - function that checks the endiannes
 *
 * Return: 0 || 1
 */
int get_endianness(void)
{
	int i = 1;
	char *en = (char *)&i;

	if (*en == 1)
		return (1);

	return (0);
}
