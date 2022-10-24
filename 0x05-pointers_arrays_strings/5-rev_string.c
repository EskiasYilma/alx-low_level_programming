#include "main.h"
#include <string.h>

/**
 * rev_string - Write a function that reverses a string
 * @s: pointer variable
 * Return: Nothing
 */

void rev_string(char *s)
{
	char *ptr_start, *ptr_end;
	char rev_char;
	int len, n;

	ptr_start, ptr_end = s;
	len = strlen(s);

	for (n = 0; n < len - 1; n++)
	{
		ptr_end++;
	}

	for (n = 0; n < len / 2; n++)
	{
		rev_char = *ptr_end;
		*ptr_end = *ptr_start;
		*ptr_start = rev_char;
		ptr_start++;
		ptr_end--;
	}
}
