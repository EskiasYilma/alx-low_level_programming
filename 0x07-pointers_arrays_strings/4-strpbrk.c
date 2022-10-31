#include "main.h"

/**
 * _strpbrk - searches a string for any of a
 * set of bytes.
 * @s: string to check first occurence
 * @accept: string to check from
 * Return: a pointer to the byte in 's' that
 * matches one of the bytes in 'accept'
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int n;

	while (*s != '\0')
	{
		n = 0;
		while (accept[n] != '\0')
		{
			if (accept[n] == *s)
				return (s);
			n++;
		}
		s++;
	}
	return (0);
}
