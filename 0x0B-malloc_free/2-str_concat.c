#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - Function that concatenates two strings
 * @s1: string one
 * @s2: str two
 * Return: NULL (failure)
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len, len1, len2;

	char *p;

	len1 = len2 = 0;
	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}

	len = len1 + len2;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(p + i) = s1[i];
	for (j = 0; j < len2; j++, i++)
		*(p + i) = s2[j];
	p[len] = '\0';

	return (p);
}
