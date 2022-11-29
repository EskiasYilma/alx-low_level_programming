#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer of the head node of a singly linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *i;

	if (*head == NULL || head == NULL)
		return;
	while (*head != NULL)
	{
		i = *head;
		*head = (*head)->next;
		free(i);
	}
	free(*head);
}
