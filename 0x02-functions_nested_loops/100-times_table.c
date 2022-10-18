#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: Starting number
 * Return: Nothing
 */

void print_times_table(int n)
{
	int m, o, p;

	if (!(n > 15 || n < 0))
	{
		for (m = 0; m <= n; m++)
		{
			for (o = 0; o <= n; o++)
			{
				p = m * o;
				if (o != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (p <= 9 && o != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(p % 10 + '0');
				}
				else if (p > 9 && p <= 99)
				{
					_putchar(' ');
					_putchar(p / 10 + '0');
					_putchar(p % 10 + '0');
				}
				else if (p > 99 && o != 0)
				{
					_putchar(p / 100 + '0');
					_putchar((p / 10) % 10 + '0');
					_putchar(p % 10 + '0');
				}
				else
				{
					_putchar(p % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
