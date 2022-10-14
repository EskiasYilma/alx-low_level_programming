#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int n;
	char sep = ',';

	n = 0;

	while (n < 10)
	{
		putchar(n % 10 + '0');
		if (n <= 8)
			putchar(sep);
		n++;
	}
	putchar('\n');
	return (0);

}

