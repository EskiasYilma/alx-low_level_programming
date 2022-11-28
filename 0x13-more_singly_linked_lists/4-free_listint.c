#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head node of a singly linked list
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint((*head).next);
	free(head);
}
