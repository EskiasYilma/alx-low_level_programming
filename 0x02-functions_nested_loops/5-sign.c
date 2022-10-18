#include "main.h"

/**
 * print_sign - checks if a number is positive or negetive
 * @c: int to test
 * Return: 1 if integer is positive, 0 if 0, -1 if negative
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
