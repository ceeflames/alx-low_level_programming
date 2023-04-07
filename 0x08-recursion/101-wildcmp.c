#include "main.h"
/**
 * str_checker - check string identicals
 * @s1: string 1
 * @s2: string 2
 * @i: left index
 * @j: special index
 * Return: 1 || 0
 */
int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
	{
		return (1);
	}
	if (s1[i] == s2[j])
	{
		return (str_checker(s1, s2, i + 1, j + 1));
	}
	if (s1[i] == '\0' && s2[j] == '*')
	{
		return (str_checker(s1, s2, i, j + 1));
	}
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);

}

/**
 * wildcmp - checking for identical string
 * @s1: string base address
 * @s2: string base address
 * Return: 1;
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
