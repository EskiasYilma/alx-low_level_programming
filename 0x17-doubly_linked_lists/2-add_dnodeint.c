#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of 'dlistint_t' list
 * @head: position of dlistint_t
 * @n: int to add
 * Return: The address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head;

	if (head == NULL)
		return (NULL);
	new_head = malloc(sizeof(struct dlistint_s));
	new_head->n = n;
	new_head->prev = NULL;
	new_head->next = (*head);
	if ((*head) != NULL)
		(*head)->prev = new_head;
	(*head) = new_head;
	return (new_head);
}
