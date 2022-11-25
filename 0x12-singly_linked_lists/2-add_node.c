#include "lists.h"

/**
 * add_node - adds a new node at the beginning of 'list_t' list
 * @head: position of list_t
 * @str: string to add
 * Return: The address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0, j = 0;
	char *s;
	list_t *new_head;

	if (str == NULL || head == NULL)
		return (NULL);
	new_head = *head;

	while (str[j])
		j++;

	s = malloc(j + 1);
	if (s == NULL)
		return (NULL);

	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
	{
		free(new_head);
		return (NULL);
	}
	(*new_head).len = j;
	(*new_head).str = s;
	(*new_head).next = *head;

	*head = new_head;
	return (new_head);
}
