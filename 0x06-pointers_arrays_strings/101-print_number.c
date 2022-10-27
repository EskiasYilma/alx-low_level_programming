#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 * Result: Nothing
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}

	i = n;
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
