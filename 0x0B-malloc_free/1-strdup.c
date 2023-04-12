#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - functions that returns a point
 * @str: pointer
 * Return: NULL || *
 */
char *_strdup(char *str)
{
	char *p;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	p = (char *)malloc((sizeof(char) * len) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		*(p + i) = str[i];
	}
	p[len] = '\0';

	return (p);
}
