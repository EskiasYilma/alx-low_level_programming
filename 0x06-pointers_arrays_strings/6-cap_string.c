#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalize all words of a string
 * @a: string to uppercase
 * Return: uppercase string
 */

char *cap_string(char *a)
{
	int i;
	int sep_ctr;
	char separator[] = " \t\n,;.!?\"(){}";

	if (a[0] >= 'a' && a[0] <= 'z')
		a[0] = toupper(a[0]);

	i = 1;

	while (a[i] != '\0')
	{
		for (sep_ctr = 0; separator[sep_ctr] != '\0'; sep_ctr++)
		{
			if (a[i] == separator[sep_ctr] && (a[i + 1] >= 'a' && a[i + 1] <= 'z'))
				a[i + 1] = toupper(a[i + 1])
		}
		i++;
	}
	return (a);
}
