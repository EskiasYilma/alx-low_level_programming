#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, count;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			count++;
	}
	p = malloc((count + ac) * sizeof(char));
	if (p == NULL)
		return (NULL);
	k = 0;
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			p[k] = av[i][j];
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}
