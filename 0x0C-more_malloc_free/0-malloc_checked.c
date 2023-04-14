#include "main.h"
#include <stdlib.com>
/**
 * *malloc_checked - Function that allocates memory
 * using malloc.
 * @b: unsigned integer
 * Return: pointer to the callocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);

	return (i);
}
