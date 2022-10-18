#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @c: int to test
 * Return: d (the last digit of c)
 */

int print_last_digit(int c)
{
	if (c < 0)
		c = (c * -1);
	_putchar((d % 10) + '0');
	return (d % 10);
}
