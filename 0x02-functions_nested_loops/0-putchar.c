#include "main.h"

/**
 * main - Entry Point
 * Return: 0 (Success)
 */

int main(void)
{
	char c[] = "_putchar";
	int n;

	for (n = 0; n < 8; n++)
	{
		_putchar(c[n]);
	}
	_putchar('\n');
	return (0);
}
