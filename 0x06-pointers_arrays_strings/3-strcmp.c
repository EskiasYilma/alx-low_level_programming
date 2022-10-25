#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 (success)
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	for (a = 0; s1[a] == s2[a]; a++)
	{
		if (s1[a] == '\0')
			return (0);
	}
	return (s1[a] - s2[a]);
}
