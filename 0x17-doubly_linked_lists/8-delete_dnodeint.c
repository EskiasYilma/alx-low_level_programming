#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list.
 * @head: pointer to the head node of a singly linked list
 * @index: index of node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *ptr;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	ptr = *head;
	if (index == 0 && ptr->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	if (index == 0 && ptr->next != NULL)
	{
		*head = ptr->next;
		(*head)->prev = NULL;
		free(ptr);
		return (1);
	}
	while (i < index - 1 && ptr && ptr->next)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr->next == NULL)
		return (-1);

	temp = ptr->next;
	ptr->next = temp->next ? temp->next : NULL;
	if (temp->next)
		temp->next->prev = ptr;
	free(temp);
	return (1);
}
