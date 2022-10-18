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
	unsigned long int summ;
	int counter;

	counter = 0;
	n = 0;
	m = 1;
	while (counter < 50)
	{
		nth = n + m;
		n = m;
		m = nth;
		if (nth < 4000000 && nth % 2 == 0)
			summ += nth;
		counter++;
	}
	printf("%lu\n", summ);
	return (0);
}
