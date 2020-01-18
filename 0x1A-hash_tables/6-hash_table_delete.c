#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table to delete.
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *s, *t, *n;
	unsigned long int con = 0;

	if (ht == NULL)
		return;
	s = ht->array[0];
	for (; con < ht->size; con++, s = ht->array[con])
		if (s)
		{
			t = s;
			while (t)
			{
				n = t->next;
				free(t->key);
				free(t->value);
				free(t);
				t = n;
			}
		}
	free(ht->array);
	free(ht);
}
