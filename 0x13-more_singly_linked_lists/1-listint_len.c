#include "lists.h"

/**
 * listint_len - returns the number of elements in a
 * linked listint_t list.
 * @h: Singly lined list
 * Return: the number of elements in 'listint_t'
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
