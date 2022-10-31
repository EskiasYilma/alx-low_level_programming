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
	unsigned int len = 0;
	unsigned int i, j, l1, l2, bool;

	for (l1 = 0; s[l1] != '\0'; l1++)
		;
	for (l2 = 0; accept[l2] != '\0'; l2++)
		;
	for (i = 0; i <= l1 && s[i] != '\0'; i++)
	{
		bool = 0;
		for (j = 0; j <= l2 && accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				bool = 1;
				break;
			}
		}
		if (bool == 1)
			len++;
		else
			break;
	}
	return (len);
}
