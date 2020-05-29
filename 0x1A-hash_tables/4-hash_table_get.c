#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to hashtable
 * @key: key to search
 * Return: the value associated
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int idx;
	char *nkey;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);
	nkey = strdup(key);
	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, nkey) == 0)
			break;
		tmp = tmp->next;
	}
	free(nkey);

	if (tmp == NULL)
		return (NULL);

	return (tmp->value);
}
