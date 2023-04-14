#include "main.h"

/**
 * *string_nconcat - Function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: unsigned int
 * Return: NULL (failure)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;

	char *ptr;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; i++);
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
		for (j = 0; s2[j]; j++);
	if (j > n)
		j = n;
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		ptr[k] = s1[k];
	for (k = 0; k < j; k++)
		ptr[k + i] = s2[k];
	ptr[i + j] = '\0';

	return (ptr);


}
