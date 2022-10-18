#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @c: int to test
 * Return: d (the last digit of c)
 */

int print_last_digit(int c)
{
	int d;

	if (c < 0)
		c = (c * -1);
	d = (c % 10);
	_putchar((d) + '0');
	return (d);
}
