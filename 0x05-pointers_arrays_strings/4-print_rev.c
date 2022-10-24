#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to a character
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len, x;

	len = strlen(s);
	for (x = len; x >= 0; x--)
	{
		printf("%c", s[x]);
	}
	putchar('\n');
}
