#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to match from
 * @accept: string to match with
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept);
{
	unsigned int n;
	unsigned int m;

	n = 0;
	while (s[n] != '\0')
	{
		m = 0;
		while (accept[m] != '\0' && s[n] != accept[m])
			m++;
		if (accept[m] == '\0')
		{
			return (n);
		}
		n++;
	}
	return (n);
}
