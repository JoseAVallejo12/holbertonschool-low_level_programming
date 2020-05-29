#include "hash_tables.h"
/**
 * hash_table_create - create a hash table of BUFF_SIZE
 * @size: len of new hash table
 * Return: new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;
	
	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return NULL;	

	new_hash->array = malloc(sizeof(hash_node_t) * size);
	if (new_hash->array == NULL)
		return NULL;
	
	memset(new_hash->array, 0, size * sizeof(hash_node_t));

	return (new_hash);
}