#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to the head node of a doubley linked list
 * Return: sum of all the data (n)
 */

int sum_dlistint(dlistint_t *head)
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
