#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of
 * @a: string to uppercase
 * Return: uppercase character
 */

char *string_toupper(char *a)
{
	int i;
	int j = strlen(a);

	i = 0;
	while (i <= j)
	{
		a[i] = toupper(a[i]);
		i++;
	}
	return (a);
}
