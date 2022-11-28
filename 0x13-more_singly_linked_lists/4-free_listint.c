#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: list head
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_list((*head).next);
	free((*head).str);
	free(head);
}
