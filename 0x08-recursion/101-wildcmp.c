#include "main.h"


/**
 * _sln - get length of a string (abbr for _strlen)
 * @s: string
 * Return: length of string 's'
 */

int _sln(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _sln(++s));
}


/**
 * wildcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if the strings are identical, else return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if ((s1[0] != '\0' && s2[0] == '*'))
	{
		if ((s1[_sln(s1) - 1] == s2[_sln(s2) - 1]) || (s2[_sln(s2) - 1] == '*'))
		{
			return (1);
		}
	}
	if (s1[0] == '\0' && s2[0] == '*')
	{
		return (1);
	}

	if (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
			return (wildcmp(++s1, ++s2));
		if (*s1 != *s2 || *s2 != '*')
			return (0);
		if (*s1 != *s2 && *s2 == '*')
			return (wildcmp(++s1, ++s2));
		return (1);
	}
	return (0);
}
