#include "main.h"

/**
 * print_alphabet - Prints the alphabet from a-z
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
