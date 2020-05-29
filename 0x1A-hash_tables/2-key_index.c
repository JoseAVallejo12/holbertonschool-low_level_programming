#include "hash_tables.h"
/**
 * key_index - get index in hash table
 * @key: string for generate key number eith fun hash_djb2
 * @size: len of hash table
 * Return: index where must be stored data in hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL)
		return (0);

	return (hash_djb2(key) % size);
}
