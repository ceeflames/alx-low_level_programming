#include "main.h"
/**
 * *_strstr - function that locates a substring
 * @haystack: constant string
 * @needle: substring
 * Return: o.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*haystack == '\0' || *needle == '\0')
	{
		return ('\0');
	}

	while (*needle == *haystack)
	{
		needle++;
	}
	return (needle);


	return (0);
}
