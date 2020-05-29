#include "hash_tables.h"
/**
 * hash_table_create - create a hash table of BUFF_SIZE
 * @size: len of new hash table
 * Return: new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i;

	/* create table hash */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* create array for each node in the table hash */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}
	/* save len of table_hash create */
	new_table->size = size;

	return (new_table);
}
