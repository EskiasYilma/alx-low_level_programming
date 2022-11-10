#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of range
 * @max: maximum value of range
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int i = 0;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}

