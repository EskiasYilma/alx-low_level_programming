#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer to a constant character variable
 * Return: length of the character variable
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
