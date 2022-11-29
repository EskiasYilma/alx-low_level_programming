#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer of the head node of a singly linked list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *ptr;

	if (*head == NULL)
		return (NULL);

	ptr = *head;
	*head = ptr->next;
	tmp = (*head)->next;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (tmp != NULL)
	{
		(*head)->next = ptr;
		ptr = *head;
		*head = tmp;
		tmp = (*head)->next;
	}

	(*head)->next = ptr;
	return (*head);
}
