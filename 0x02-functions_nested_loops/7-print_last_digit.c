#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @c: int to test
 * Return: the last digit of c
 */

int print_last_digit(int c)
{
	int n;

	n = c % 10;
	if (n < 0)
		n = n * -1;
	_putchar(n + '0');
	return (n);
}
