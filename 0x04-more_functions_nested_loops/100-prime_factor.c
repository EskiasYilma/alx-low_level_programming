#include <stdio.h>

/**
 * main -  that finds and prints the largest prime
 * factor of the number 612852475143
 * Return: 0 (Success)
 */

int main(void)
{
	long n;
	long target;

	target = 612852475143;
	n = 2;
	while (n < target)
	{
		if (target % n)
			target = target / n;
		n++;
	}
	printf("%li\n", target);
	return (0);
}
