#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, j;
	hash_node_t *t;

	if (!ht)
		return;

	printf("{");
	j = 0;
	for (i = 0; i < ht->size; i++)
	{
		t = ht->array[i];
		while (t)
		{
			printf("%s'%s': '%s'", j == 0 ? "" : ", ", t->key, t->value);
			t = t->next;
			j++;
		}
	}
	printf("}\n");
}
