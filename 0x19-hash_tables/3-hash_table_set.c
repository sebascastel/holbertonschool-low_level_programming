#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key to be added to hash table
 * @value: value to add to key pair
 * Return: 1 if it succeeded 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *copy;
	unsigned long int index;
	int nodes = 0;
	char *val;

	if (!key || key[0] == '\0' || !ht || !value)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	val = strdup(value);
	copy = ht->array[index];
	while (copy)
	{
		if (strcmp(copy->key, key) == 0)
		{
			free(copy->value);
			copy->value = val;
			return (1);
		}
		copy = copy->next;
		nodes++;
	}
	new->key = strdup(key);
	new->value = val;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
