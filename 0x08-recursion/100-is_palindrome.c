#include "main.h"

/**
 * _strlen - get the length of a string
 * @s: string
 * Return: length of string 's'
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _checker - checks if a string is palindrome
 * @s: string
 * @ls: left index of 's'
 * @rs: right index of 's'
 * Return: 1 if string is palindrome, 0 if not
 */

int _checker(char *s, int ls, int rs)
{
	if (*s == '\0' || ls < 0 || rs < 0)
		return (0);
	if (ls >= rs)
		return (1);
	if (s[ls] == s[rs])
		return (_checker(s, ls + 1, rs - 1));
	return (0);
}


/**
 * is_palindrome - checks if a string is palindrome
 * @s: string
 * Return: 1 if string is palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	return (_checker(s, 0, _strlen(s) - 1));
}
