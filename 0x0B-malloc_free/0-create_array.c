#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: array size
 * @c: char
 * Return: Pointer to the array c
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc((size + 1) * sizeof(char));
	if (size == 0 || p == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}

	p[i] = '\0';
	return (p);
}
