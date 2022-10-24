#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line
 * @str: pointer to a character
 * Return: Nothing
 */

void puts2(char *str)
{
	int len, x;

	len = strlen(str);
	for (x = 0; x <= len - 1; x += 2)
	{
		printf("%c", str[x]);
	}
	putchar('\n');
}
