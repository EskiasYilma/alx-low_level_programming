#include "main.h"

/**
 * print_diagonal - draws a diagonal in the terminal.
 * @n: iteration
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar('_');
			}
			_putchar('\\');
			_putchar('\n');
	}
	else
		_putchar('\n');
	}
}
