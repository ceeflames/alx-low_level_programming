#include "main.h"
/**
 * *array_range - Function that creates an array of integer
 * @min: minimun
 * @max: maximum
 * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(size * sizeof(int));

	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}

