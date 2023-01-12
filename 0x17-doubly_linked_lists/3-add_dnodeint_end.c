#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of 'dlistint_t' list
 * @head: position of dlistint_t
 * @n: int to add
 * Return: The address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *temp;

	if (head == NULL)
		return (NULL);
	end = malloc(sizeof(struct dlistint_s));
	if (end == NULL)
	{
		free(end);
		return (NULL);
	}
	end->n = n;
	end->next = NULL;
	temp = (*head);
	if ((*head) == NULL)
	{
		end->prev = NULL;
		*head = end;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = end;
	end->prev = temp;

	return (*head);
}
