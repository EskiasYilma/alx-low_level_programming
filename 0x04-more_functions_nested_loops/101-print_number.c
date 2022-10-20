#include <stdio.h>

/**
 * print_number -  a function that prints an integer
 * @n: Integer to test
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int m;
	
	m = n;
	if (n < 0)
	{
		_putchar('-');
		m = -m;
	}
	if ((m / 10) > 0)
		print_number(m / 10);
	_putchar(m % 10 + '0');
}
