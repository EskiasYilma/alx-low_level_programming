#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: Nothing
 */

void print_numbers(void)
{
	char c = 0;

	while (c <= 9)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
