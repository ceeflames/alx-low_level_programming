#include "main.h"
/**
 * *_strpbrk - Function that searches a string for any
 * of a set of bytes.
 * @s: constant
 * @accept: constant
 * @t: temp variable
 * Return: s.
 */
char *_strpbrk(char *s, char *accept)
{
	const char *t;

	if (*s == '\0' || *accept == '\0')
	{
		return ('\0');
	}


	while (*s != '\0')
	{
		t = accept;
		while (*t != '\0')
		{
			if (*s == *t)
			{
				return (s);
			}
			t++;
		}
		s++;
	}
	return ('\0');

	return (0);
}
