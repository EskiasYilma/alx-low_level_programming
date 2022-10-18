#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @c: int to test
 * Return: the last digit of c
 */

int print_last_digit(int c)
{
	int n;

	n = _abs(c) % 10;
	_putchar(n + '0');
	return (n);
}
