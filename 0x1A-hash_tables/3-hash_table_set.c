#include "hash_tables.h"
/**
 * hash_table_set - creates a new node in the hashtable
 * @ht: pointer to the hashtable
 * @key: key
 * @value: value to place in the node
 * Return: 1  in success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode = malloc(sizeof(hash_node_t));
	unsigned long int haidx;
	hash_node_t *tmp;

	if (ht == NULL || key == '\0' || *key == '\0')
		return (0);
	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	haidx = key_index((unsigned char *)key, ht->size);
	if (ht->array[haidx] != NULL)
	{
		tmp = ht->array[haidx];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, newnode->key) == 0)
				break;
			tmp = tmp->next;
		}
		if (tmp == NULL)
		{
			newnode->next = ht->array[haidx];
			ht->array[haidx] = newnode;
		}
		else
		{
			free(tmp->value);
			tmp->value = strdup(newnode->value);
			free(newnode->value);
			free(newnode->key);
			free(newnode);
		}
	}
	else
	{
		newnode->next = NULL;
		ht->array[haidx] = newnode;
	}
	return (1);
}
