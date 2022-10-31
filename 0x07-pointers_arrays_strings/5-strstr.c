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
	while (*haystack != *needle && *haystack != '\0')
		haystack++;
	if (*haystack == *needle)
		return (haystack);
	else
		return (NULL);
	return (NULL);
}
