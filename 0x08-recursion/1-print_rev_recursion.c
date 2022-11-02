#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (s[i] != '\n')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
