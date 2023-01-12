#include "lists.h"

/**
 * free_dlistint - adds a new node at the end of 'dlistint_t' list
 * @head: position of dlistint_t
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	while (head)
	{
		temp = head;
		head = head->next;
		temp->prev = NULL;
		temp->next = NULL;
		free(temp);
	}

}
