#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: string to duplicate
 * Return: Pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	p = malloc((i + 1) * sizeof(char));
	j = 0;
	while (j < i)
	{
		p[j] = str[j];
		j++;
	}
	return (p);
}
