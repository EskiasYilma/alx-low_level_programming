#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 * Return: Nothing
 */

void times_table(void)
{
	int n;
	int m;
	int o;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			o = n * m;
			if (m != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (o > 9)
			{
				_putchar(o / 10 + '0');
				_putchar(o % 10 + '0');
			}
			else if (o <= 9 && m != 0)
			{
				_putchar(' ');
				_putchar(o % 10 + '0');
			}
			else
			{
				_putchar(o % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
