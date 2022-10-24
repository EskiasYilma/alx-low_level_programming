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

	for (i = 0; i < len - 1; i++)
	{
		ptr_end++;
	}

	for (i = 0; i < len / 2; i++)
	{
		rev_char = *ptr_end;
		*ptr_end = *ptr_start;
		*ptr_start = rev_char;
		ptr_start++;
		ptr_end--;
	}
}
