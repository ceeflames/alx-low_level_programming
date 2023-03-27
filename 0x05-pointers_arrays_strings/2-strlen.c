#include "main.h"
#include <string.h>
/**
 * int _strlen - functions that returns the lenght of string
 * @s: strlen int
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;

	return (i);
}
