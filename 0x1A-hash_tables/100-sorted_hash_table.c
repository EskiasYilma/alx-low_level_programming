#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	if (size < 1)
		return (NULL);
	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: the key
 * Return: the value associated with the element, or
 * NULL if key couldn’t be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node = NULL;
	unsigned long int i = key_index((const unsigned char *)key, ht->size);

	node = ht->array[i];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints a hash table.
 * @ht: hash table
 * Return: Nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node = NULL;

	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in reverse
 * @ht: hash table
 * Return: Nothing
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node = NULL;

	printf("{");
	node = ht->stail;
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: Nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node = NULL, *tmp = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}

	free(ht->array);
	free(ht);
}

/**
 * shash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: a non empty key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *n = create_node(key, value);
	unsigned long int i = key_index((unsigned char *)key, ht->size);
	shash_node_t *c = ht->array[i];
	int status = x(ht, i, n, c);

	if (status != 0)
	{
		return (status);
	}
	add_to_sorted_list(ht, n);
	return (0);
}

/**
 * create_node - creates a node
 * @key: a non empty key
 * @value: the value associated with the key
 * Return: pointer to the new node created
 */

shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *n = malloc(sizeof(shash_node_t));

	if (n == NULL)
	{
		return (NULL);
	}
	n->key = strdup(key);
	n->value = strdup(value);
	n->next = NULL;
	n->sprev = NULL;
	n->snext = NULL;
	return (n);
}

/**
 * x - Helper function to Add to hash array
 * @ht: hash table
 * @n: new node
 * @c: current node
 * @i: index
 * Return: 0 (success)
 */

int x(shash_table_t *ht, unsigned long int i, shash_node_t *n, shash_node_t *c)
{
	if (c == NULL)
	{
		ht->array[i] = n;
		return (0);
	}
	while (c != NULL)
	{
		if (strcmp(c->key, n->key) == 0)
		{
			free(c->value);
			c->value = strdup(n->value);
			free(n->key);
			free(n);
			return (0);
		}
		c = c->next;
	}
	n->next = ht->array[i];
	ht->array[i] = n;
	return (0);
}

/**
 * add_to_sorted_list - adds new node to a sorted list
 * @ht: hash table
 * @n: new node
 * Return: Nothing
 */


void add_to_sorted_list(shash_table_t *ht, shash_node_t *n)
{
	shash_node_t *c = ht->shead;

	if (ht->shead == NULL)
	{
		ht->shead = n;
		ht->stail = n;
		return;
	}
	while (c != NULL)
	{
		if (strcmp(c->key, n->key) > 0)
		{
			if (c->sprev == NULL)
			{
				ht->shead = n;
				n->sprev = NULL;
				n->snext = c;
				c->sprev = n;
			}
			else
			{
				c->sprev->snext = n;
				n->sprev = c->sprev;
				c->sprev = n;
				n->snext = c;
			}
			return;
		}
		if (c->snext == NULL)
		{
			c->snext = n;
			n->sprev = c;
			n->snext = NULL;
			ht->stail = n;
			return;
		}
		c = c->snext;
	}
}
