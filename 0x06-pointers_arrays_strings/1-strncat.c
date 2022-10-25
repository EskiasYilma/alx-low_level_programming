#include "main.h"

/**
 * _strncat - concatenate two strings
 * @src: source pointer
 * @dest: destination pointer
 * Return: destination
 */

char *_strncat(char *dest, char *src)
{
	int len = 0;
	int i = 0;
	
	while(*(dest++))
		len++;
	

	while (i < n && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
