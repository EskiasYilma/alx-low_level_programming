#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int n;
	char m;

	n = 0;
	m = 'a';

	while (n < 10)
	{
		putchar(n % 10 + '0');
		n++;
	}
	while (m <= 'f')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);

}

