#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	int flag = 0;

	if (!ht)
		exit(2);
	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			if (flag == 1)
				printf(", ");
			flag = 1;
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}");
	printf("\n");
}
