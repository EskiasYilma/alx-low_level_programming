#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head node of a singly linked list
 * @idx: index of node to insert into
 * @n: value to insert
 * Return: returns the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(struct listint_s));
	listint_t *tmp;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	tmp = *head;
	if (idx == 0)
	{
		new_node->next = tmp;
		*head = new_node;
		return (*head);
	}

	tmp = *head;
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
	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
