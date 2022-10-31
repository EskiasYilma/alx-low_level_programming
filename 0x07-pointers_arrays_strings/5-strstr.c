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

	while (*haystack != '\0')
	{
		i = 0;
		while (needle[i] != '\0')
		{
			if (needle[i] == *haystack)
				return (needle);
			i++;
		}
		haystack++;
	}
	return (NULL);
}
