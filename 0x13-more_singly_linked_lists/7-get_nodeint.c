#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head node of a singly linked list
 * @index: nth node
 * Return: returns the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	tmp = head;

	while (i < index - 1 && head != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp->next);
}
