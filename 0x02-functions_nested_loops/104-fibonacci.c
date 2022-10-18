#include <stdio.h>

/**
 * main - Entry point.
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long int n;
	unsigned long int m;
	unsigned long int nth;
	int counter;

	counter = 0;
	n = 0;
	m = 1;
	while (counter < 98)
	{
		nth = n + m;
		n = m;
		m = nth;
		printf("%lu", nth);
		if (counter == 97)
			putchar('\n');
		else
			printf(", ");
		counter++;
	}
	return (0);
}
