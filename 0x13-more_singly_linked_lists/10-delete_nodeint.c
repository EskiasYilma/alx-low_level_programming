#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t linked list.
 * @head: pointer to the head node of a singly linked list
 * @index: index of node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	ptr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	while (i < index - 1)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (-1);
		i++;
	}
	temp = ptr->next;
	ptr->next = temp->next;
	free(temp);
	return (1);
}
