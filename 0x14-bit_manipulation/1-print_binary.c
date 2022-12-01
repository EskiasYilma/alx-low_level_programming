#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */


void print_binary(unsigned long int n)
{
	int i, j;

	if (n == 0)
		putchar('0');

	i = sizeof(n) * 8 - 1;
	for (j = 0; i >= 0; i--)
	{
		if ((n >> i) & 1)
			j = 1;
		if (j == 1)
		{
			if ((n >> i) & 1)
				putchar('1');
			else
				putchar('0');
		}
	}
}
