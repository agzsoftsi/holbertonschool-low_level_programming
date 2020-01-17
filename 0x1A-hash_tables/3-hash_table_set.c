#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table to add element to.
 * @key: key of key/value pair.
 * @value: value of key/value pair.
 *
 * Return: 1 on success, 0 on fail.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new, *s;

	if (key == NULL || key == '\0' || value == NULL || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
		for (s = ht->array[index]; s; s = s->next)
			if (strcmp(key, s->key) == 0)
			{
				free(s->value);
				s->value = strdup(value);
				return (1);
			}

	new = calloc(sizeof(*new), 1);
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		free(new->key);
		free(new->value);
		free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
