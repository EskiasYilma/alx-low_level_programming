#include "main.h"

/**
 * _strncpy - copies a string
 * @src: source pointer
 * @dest: destination pointer
 * @n: index
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	for ( ; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
