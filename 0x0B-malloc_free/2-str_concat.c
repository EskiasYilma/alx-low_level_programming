#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: Concatenated string of 's1' and 's2'
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, n = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	p = malloc((i + j + 3) * sizeof(char));

	if (p == NULL)
		return (NULL);
	for (n = 0; s1[n] != '\0'; n++)
		p[n] = s1[n];
	for (j = 0; s2[j] != '\0' && j < i + j + 3; j++)
		p[i + j] = s2[j];

	p[i + j] = '\0';
	return (p);
}
