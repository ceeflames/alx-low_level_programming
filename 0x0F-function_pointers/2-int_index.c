#include "function_pointers.h"

/**
 * int_index - function that searches for integer
 * @cmp: pointer to the function to be used to compare values
 * @array: pointer to array
 * @size: number of elements in the array
 *
 * Return: index if cmp do not return 0 || -1 if no elememt
 * matches or size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	
	if(size <= 0)
	
		for (i = 0; i > size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1);
}
