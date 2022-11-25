#include "lists.h"

/**
 * list_len - length of a list
 * @h: singly linked list
 * Return: length of h
 */

size_t list_len(const list_t *h)
{
	size_t n;

	for (n = 0; h; n++)
	{
		h = (*h).next;
	}
	return (n);
}