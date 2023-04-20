#include "function_pointers.h"

/**
 * array_iterator - function that executes function given
 * as a parameter on each element of an array
 * @size: size of the array
 * @array: pointer to array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
