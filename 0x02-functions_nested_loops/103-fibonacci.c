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
	
	summ = 0;
	n = 0;
	m = 1;
	for (counter = 0; counter < 50; counter++)
	{
		nth = n + m;
		n = m;
		m = nth;
		if (nth < 4000000 && nth % 2 == 0)
		{
			summ += nth;
		}
	}
	printf("%lu\n", summ);
	return (0);
}
