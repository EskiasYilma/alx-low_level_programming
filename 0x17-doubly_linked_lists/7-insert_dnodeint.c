#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head node of a linked list
 * @idx: index of node to insert into
 * @n: value to insert
 * Return: returns the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(struct dlistint_s)), *tmp, *t2, *t = *h;
	unsigned int i = 0;

	for (i = 0; t; i++)
		t = t->next;
	if (i < idx)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	tmp = *h;
	if ((*h) == NULL)
	{
		*h = new_node;
		return (*h);
	}
	if (idx == 0)
	{
		new_node->next = tmp;
		*h = new_node;
		return (*h);
	}
	while (idx > 1)
	{
		tmp = tmp->next;
		idx--;
		if (!tmp)
		{
			free(new_node);
			return (NULL);
		}
	}
	t2 = tmp->next;
	tmp->next = new_node;
	t2->prev = new_node;
	new_node->prev = tmp;
	new_node->next = t2;
	return (new_node);
}
