#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: buffer size for 's2'
 * Return: pointer shall point to a newly
 * allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null
 * terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = n, m = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	if (n >= j)
		k = j;
	p = malloc((i + k + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);
	for (m = 0; s1[m] != '\0'; m++)
		p[m] = s1[m];
	for (j = 0; s2[j] != '\0' && j < k; j++)
		p[i + j] = s2[j];

	p[i + j] = '\0';
	return (p);
}
