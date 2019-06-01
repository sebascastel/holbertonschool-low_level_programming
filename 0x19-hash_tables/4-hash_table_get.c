#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key to be added to hash table
 * Return: value if it succeeded NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];
	for (i = 0; node; i++)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
