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
	unsigned int n;

	while (*haystack != '\0')
	{
		n = 0;
		while (needle[n] != '\0')
		{
			if (needle[n] == *haystack)
				return (needle);
			n++;
		}
		haystack++;
	}
	return (0);
}
