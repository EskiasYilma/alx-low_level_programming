#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer to pointer of the head node of a singly linked list
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i = 0;

	if (*head == NULL)
		return (0);
	tmp = *head;
	if (*head != NULL)
	{
		i = tmp->n;
		*head = tmp->next;
		free(tmp);
	}

	return (i);
}
