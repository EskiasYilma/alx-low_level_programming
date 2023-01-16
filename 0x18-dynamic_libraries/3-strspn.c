#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to match from
 * @accept: string to match with
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, m;

	n = 0;
	while (*(s + n))
	{
		m = 0;
		while (*(accept + m))
		{
			if (*(s + n) == *(accept + m))
			{
				break;
			}
			m++;
		}
		if (!*(accept + m))
		{
			return (n);
		}
		n++;
	}
	return (n);
}
