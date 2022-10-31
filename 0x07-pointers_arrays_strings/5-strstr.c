#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: substring to locate
 * @haystack: string to search
 * Return: pointer to the beginning of the
 * located substring.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, li, lj;

	for (li = 0; haystack[li] != '\0'; li++)
		;
	for (lj = 0; needle[lj] != '\0'; lj++)
		;

	for (i = 0; i < li; i++)
	{
		for (j = 0; j < lj; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
			if (j + 1 == lj)
				return (needle);
		}
	}
	return (NULL);
}
