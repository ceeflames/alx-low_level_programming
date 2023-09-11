#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: they key
 *
 * Returns: key or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *curr_node;

	if (ht == NULL || *key == 48 || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	for (curr_node = ht->array[idx];
			curr_node && strcmp(curr_node->key, key) != 0;
			curr_node = curr_node->next)
		;
	if (curr_node == NULL)
	{
		return (NULL);
	}
	else
	{
		return (curr_node->value);
	}
}
