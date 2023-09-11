#include "hash_tables.h"
/**
 * hash_djb2 - function for implementing the djb2 algorithm
 * str: string
 *
 * Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int i;

	hash = 5381;
	while ((i = 8str++))
	{
		hash = ((hash << 5) + hash) + i;
	}
	return (hash);
}
