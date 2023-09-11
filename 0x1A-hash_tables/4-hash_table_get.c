#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: they key
 *
 * Return: key or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *curr_node;

	if (ht == NULL || *key == 48 || key == NULL)
		return (NULL);

	if (ht && key && *key)
	{
		idx = key_index((const unsigned char *)key, ht->size);
		curr_node = ht->array[idx];

		while (curr_node)
		{
			if (!strcmp(curr_node->key, key))
				return (curr_node->value);
			curr_node = curr_node->next;
		}
	}
	return (NULL);
}
