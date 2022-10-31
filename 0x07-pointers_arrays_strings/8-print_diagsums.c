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
	unsigned int i, j;
	unsigned int array_size = size * size;
	unsigned long d_sum1, d_sum2;

	d_sum1 = 0;
	d_sum2 = 0;

	i = 0;
	while (i < array_size)
	{
		d_sum1 += a[i];
		i += size + 1;
	}

	j = size - 1;
	while (j < array_size - 1)
	{
		d_sum2 += a[j];
		j += size - 1;
	}

	printf("%d, %d\n", d_sum1, d_sum2);
}
