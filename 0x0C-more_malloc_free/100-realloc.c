#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using
 * malloc and free
 * @ptr: pointer to the memory previously
 * allocated with a call to malloc(old_size)
 * @old_size: buffer size for 'ptr'
 * @new_size: new size of the new memory block
 * Return: pointer to new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *temp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	i = 0;
	temp = ptr;
	while (i < old_size)
	{
		p[i] = temp[i];
		i++;
	}
	return (p);
}
