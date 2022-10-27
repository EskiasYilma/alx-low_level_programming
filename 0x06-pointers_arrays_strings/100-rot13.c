#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @a: string to encode
 * Return: Encoded string a
 */

char *rot13(char *a)
{
	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (a[i] == x[j])
			{
				a[i] = y[j];
				break;
			}
		}
	}
	return (a);
}
