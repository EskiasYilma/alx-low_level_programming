#include <stdio.h>

/**
 * print_number -  a function that prints an integer
 * @n: Integer to test
 * Return: Nothing
 */

void print_number(int n)
{
	int i, j, current, over;

	i = 1;
	j = 1;
	over = 1;
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	current = n;
	while (current >= 10)
	{
		current = current / 10;
		j++;
	}
	while (i < j)
	{
		over = over * 10;
		i++;
	}
	while (over > 1)
	{
		_putchar((n / over) % 10 + '0');
		over = over / 10;
	}
	_putchar(n % 10 + '0');
}
