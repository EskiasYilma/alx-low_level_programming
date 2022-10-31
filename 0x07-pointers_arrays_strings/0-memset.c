#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area pointer
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n;)
	{
		*s = b;
		i++;
		s++;
	}
	*s = '\0';

	return (s);
}
