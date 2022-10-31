#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to match from
 * @accept: string to match with
 * Return: number of bytes in the initial segment
 * of 's' which consist of bytes from 'accept'
 */

unsigned int _strspn(char *s, char *accept);
{
	unsigned int n;
	unsigned int m;

	while (s[n] != '\0')
	{
		m = 0;
		while (accept[m] != '\0')
		{
			while (s[n] != accept[m])
			{
				if (accept[m] == '\0')
				{
					return (n);
				}
			}
		}
	}
	return (n);
}
