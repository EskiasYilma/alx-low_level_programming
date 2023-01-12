#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head node of a linked list
 * @idx: index of node to insert into
 * @n: value to insert
 * Return: returns the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(struct dlistint_s));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	tmp = *h;
	if (!tmp)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = tmp;
		tmp->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (idx > 1 && tmp->next)
	{
		tmp = tmp->next;
		idx--;
	}
	if (idx > 1 && !tmp->next)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = tmp;
	new_node->next = tmp->next ? tmp->next : NULL;
	if (tmp->next)
		tmp->next->prev = new_node;
	tmp->next = tmp->next && idx > 1 ? NULL : new_node;
	return (new_node);
}
