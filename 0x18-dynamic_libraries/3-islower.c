#include "main.h"

/**
 * _islower - function that checjs for lowercase character
 * @c: character to be checked
 *
 * Return: 1 if c is lowercase, else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

