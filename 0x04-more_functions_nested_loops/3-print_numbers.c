#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: Nothing
 */

void print_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(c % 10 + '0');
		c++;
	}
	putchar('\n');
}
