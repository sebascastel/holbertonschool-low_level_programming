#include "hash_tables.h"
/**
 *key_index- gives you the index of a key
 *@size: the size of the array of the hash table
 *@key: is the key
 *Return: the index at which the key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
