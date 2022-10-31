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
	unsigned int i;
	unsigned int j;

	for (j = 0; haystack[j] != '\0'; j++)
		;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; i < j; i++)
	{
		if (*(haystack + i) == *needle)
		{
			char *ptr = _strstr(haystack + i + 1, needle + 1);

			if (ptr)
				return (ptr - 1);
			else
				return (NULL);
		}
	}

	return (NULL);
}
