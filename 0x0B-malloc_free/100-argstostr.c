#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - function that concatenates all
 * the arguments in the program
 * @ac: integer
 * @av: argv
 * Return: NULL (failure)
 */
char *argstostr(int ac, char **av)
{
	char *ptr, *p;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		p = av[i];
		j = 0;
		while (p[j++])
			len++;
		len++;
	}
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		p = av[i];
		k = 0;
		while (p[k])
			ptr[j] = p[k];
			k++;
			j++;
		ptr[j++] = '\n';
	}
	ptr[j] = '\0';

	return (ptr);
}
