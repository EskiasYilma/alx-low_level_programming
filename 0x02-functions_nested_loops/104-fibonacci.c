#include <stdio.h>

/**
 * main - Entry point.
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long int a, b, abth, sumab, d, e, deth, sumde,  next;
	int counter;

	counter = 0;
	a = 0;
	b = 1;
	while (counter < 92)
	{
		abth = a + b;
		a = b;
		b = abth;
		printf("%lu, ", abth);
		counter++;
	}
	d = a % 1000;
	e = b % 1000;
	a = a / 1000;
	b = b / 1000;
	while (counter < 99)
	{
		sumde = d + e;
		sumab = a + b;
		next = sumde / 1000;
		deth = sumde - next * 1000;
		abth = sumab + next;
		if (deth > 99)
			printf("%lu%lu", abth, deth);
		else
			printf("%lu0%lu", abth, deth);
		if (counter != 98)
			printf(", ");
		counter++;
	}
	printf("\n");
	return (0);
}
