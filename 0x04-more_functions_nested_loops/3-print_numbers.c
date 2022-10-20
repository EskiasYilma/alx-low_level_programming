#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: Nothing
 */

void print_numbers(void)
{
	for (c = 0; c <= 9; c++)
	{
		_putchar((c % 10) + '0');
	}
	_putchar('\n');
}