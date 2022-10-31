#include "main.h"

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: 2d array
 * @size: size of array
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	unsigned int n, m;
	unsigned int array_size = size * size;
	unsigned int d_sum1, d_sum2;

	d_sum1 = 0;
	d_sum2 = 0;

	n = 0;
	while (n < array_size)
	{
		d_sum1 += a[n];
		n += size + 1;
	}

	m = size - 1;
	while (m < array_size - 1)
	{
		d_sum2 += a[m];
		m += size - 1;
	}

	printf("%d, %d\n", d_sum1, d_sum2);
}
