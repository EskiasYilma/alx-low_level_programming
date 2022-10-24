#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to a character
 * Return: Nothing
 */

void puts_half(char *str)
{
	int len, x;

	len = strlen(str);
	for (x = len / 2; x <= len - 1; x++)
	{
		putchar(str[x]);
	}
	putchar('\n');
}
