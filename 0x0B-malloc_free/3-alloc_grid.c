#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - Funtion that returns a pointer
 * to a 2 dimensional array of int
 * @width: integer
 * @height: integer
 * Return: NULL (failure)
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	p = (int **)malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(p + i) = (int *)malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(*(p + i));
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	return (p);
}
