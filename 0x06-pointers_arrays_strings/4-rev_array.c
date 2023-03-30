#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function for reversing arrays
 * @n: index numbers
 * @a: pointer to a
 * Return: 0.
 */
void reverse_array(int *a, int n)
{
	/** last index n = n - 1 */
	int i, j;

	i = 0;
	n = n - 1;
	while (i <= n)
	{
		j = a[i];
		a[i++] = a[n];
		a[n--] = j;
	}
}

