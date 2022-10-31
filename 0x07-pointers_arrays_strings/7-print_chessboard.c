#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: rows and columns
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	unsigned int n, m;

	n = 0;
	while (n < 8)
	{
		m = 0;
		while (m < 8)
		{
			_putchar(a[n][m]);
			m++;
		}
		_putchar('\n');
		n++;
	}
	_putchar('\0');
}
