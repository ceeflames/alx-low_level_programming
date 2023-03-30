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
	int j;
	/** last index n = n - 1 */
	n = n - 1;

	for (j = n; j >= 0; j--)
	{
		printf("%d", a[j]);
		if (j != 0)
		{
			printf(", ");
		}

	}
	printf("\n");
}

