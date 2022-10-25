#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenate two strings
 * @src: source pointer
 * @dest: destination pointer
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int a, b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
