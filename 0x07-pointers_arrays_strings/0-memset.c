#include "main.h"
/**
 * *_memset - Function that fills the memory with
 * constant byte.
 * @s:pointer destination
 * @b:constant byte
 * @n: number of bytes
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;

	return s;
}
