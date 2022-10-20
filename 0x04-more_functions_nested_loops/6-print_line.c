#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: iteration
 * Return: Nothing
 */

void print_line(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
