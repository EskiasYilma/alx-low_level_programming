#include "main.h"

/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 * Return: Nothing
 */

void jack_bauer(void)
{
	int n;
	int m;

	for (n = 0; n < 24; n++)
	{
		for (m = 0; m < 24; m++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
