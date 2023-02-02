#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *t, *p;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		p = ht->array[i];
		while (p != NULL)
		{
			t = p;
			p = p->next;
			free(t->key);
			free(t->value);
			free(t);
		}
	}
	free(ht->array);
	free(ht);
}
