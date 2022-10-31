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
	while (*a[n] != '\0')
	{
		m = 0;
		while (*a[m] != '\0')
		{
			_putchar(a[n][m]);
			m++;
		}
		_putchar('\n');
		n++;
	}
	_putchar('\0');
}
