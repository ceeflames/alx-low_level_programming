#include "main.h"
/**
 * reverse_array - function for reversing arrays
 *
 * Return: 0.
 */
void reverse_array(int *a, int n)
{
	/** last index n = n - 1 */
	n = n - 1;
	int i;

	for (i = n; i >= 0; i--)
	{
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(", ");
		}

	}
	printf("\n");
}

