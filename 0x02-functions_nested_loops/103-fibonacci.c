#include <stdio.h>

/**
 * main - Entry point.
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long n;
	unsigned long m;
	unsigned long nth;
	unsigned long summ;
	int counter;

	counter = 0;
	summ = 0;
	n = 0;
	m = 1;
	while (counter < 50)
	{
		nth = n + m;
		n = m;
		m = nth;
		if (nth < 4000000 && nth % 2 == 0)
		{
			summ += nth;
		}
		counter++;
	}
	printf("%lu\n", summ);
	return (0);
}
