#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2
 * dimensional array of integers.
 * @width: array width
 * @height: array height
 * Return: pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0 || width + height <= 1)
		return (NULL);
	p = malloc(height * sizeof(*p));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		p[i] = malloc(width * sizeof(**p));
		if (p[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			p[i][j] = 0;
			j++;
		}
		i++;
	}
	return (p);
}
