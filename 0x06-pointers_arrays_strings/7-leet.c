#include "main.h"
#include <ctype.h>

/**
 * leet - encodes a string into 1337.
 * @s: string to encode
 * Return: encoded string
 */

char *leet(char *s)
{
	char x[] = "aeotl";
	char y[] = "43071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (s[i] == x[j] || s[i] == toupper(x[j]))
				s[i] = y[j];
		}
	}
	return (s);
}
