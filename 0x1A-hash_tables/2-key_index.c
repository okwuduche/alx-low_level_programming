#include "hash_tables.h"
/**
 * key_index -Returns the normalized key index
 *
 * @key: The key to get/set in the hash table
 * @size: The size of the hash table
 * @unsigned long int
 * Return: Normalized index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2((unsigned char *)key);
	return (index % size);
}
