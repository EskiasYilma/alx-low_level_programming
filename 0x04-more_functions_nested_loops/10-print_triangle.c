#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: iteration
 * Return: Nothing
 */

void print_triangle(int size)
{
	int i;
	int space;
	int hash;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (space = i; space < size; space++)
				_putchar(' ');
			for (hash = 1; hash <= i; hash++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
