#include "hash_tables.h"

/**
 * hash_table_print - Function that print out entire hash map.
 * @ht: hash table
 *
 * Return: print out list - if ht == null, print nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	int con1 = 0, con2 = 0;
	hash_node_t *s;

	if (ht == NULL)
		return;
	for (con1 = ht->size - 1; ht->array[con1] == NULL; con1--)
		;
	s = ht->array[0];
	putchar('{');
	for (; con2 <= con1; con2++, s = ht->array[con2])
	{
		for (; s; s = s->next)
		{
			if (s && con2 != con1)
				printf("'%s': '%s', ", s->key, s->value);
			else if (s && con1 == con2)
				printf("'%s': '%s'", s->key, s->value);
		}
	}
	puts("}");

}
