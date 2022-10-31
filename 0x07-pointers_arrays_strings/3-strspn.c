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
	int count = 0;
	unsigned int i, j;
	int bool;

	for (i = 0; s[i] != '\0'; i++)
	{
		bool = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				bool = 1;
				break;
			}
		}
		if (bool == 1)
			count++;
		else
			break;
	}
	return (count);
}
