#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head node of a singly linked list
 * Return: sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	int i, j = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		i = head->n;
		j += i;
		head = head->next;
	}
	return (j);
}
