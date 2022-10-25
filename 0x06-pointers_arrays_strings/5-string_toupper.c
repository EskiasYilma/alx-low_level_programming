#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of
 * @a: string to uppercase
 * Return: uppercase character
 */

char *string_toupper(char *a)
{
	int i = 0;
	int j = 0;

	while (*(a++))
		j++;

	while (i < j)
	{
		a[i] = toupper(a[i]);
		i++;
	}
	return (a);
}
