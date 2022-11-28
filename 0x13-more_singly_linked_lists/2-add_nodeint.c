#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the head node of a singly linked list
 * @n: element to add to new node
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = (listint_t *)malloc(sizeof(struct listint_s));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	if (*head != NULL)
	{
		temp->next = *head;
	}
	*head = temp;
	return (*head);
}
