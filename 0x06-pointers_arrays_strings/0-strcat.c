#include "main.h"

/**
 * _strcat - concatenate two strings
 * @src: source pointer
 * @dest: destination pointer
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	for (b = 0; src[b] != '\0'; b++)
		dest[a + b] = src[b];

	dest[a + b] = '\0';
	return (dest);
}
