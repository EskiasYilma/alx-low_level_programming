#include <stdio.h>

/**
 * main - Entry point.
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long int a, b, abth;
	int counter;

	counter = 0;
	a = 0;
	b = 1;
	while (counter < 98)
	{
		abth = a + b;
		a = b;
		b = abth;
		printf("%lu, ", abth);
		counter++;
	}
	return (0);
}
