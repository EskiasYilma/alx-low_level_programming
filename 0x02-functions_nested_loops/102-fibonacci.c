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

	counter = 1;
	n = 0;
	m = 1;
	while (counter < 50)
	{
		printf("%lu, ", n);
		nth = n + m;
		n = m;
		m = nth;
		counter++;
	}
	putchar('\n');
	return (0);
}
