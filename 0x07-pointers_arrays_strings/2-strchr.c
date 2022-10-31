#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search from
 * @c: character to start searching from
 * Return: pointer to the first occurence
 * of the character 'c'
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (NULL);
}
