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

	d_sum1 = d_sum2 = 0;

	for (i = 0; i < array_size; i += size + 1)
	{
		d_sum1 += a[i];
	}

	for (j = size - 1; j < array_size; j += size -1)
	{
		d_sum2 += a[j];
	}

	printf("%d, %d\n", d_sum1, d_sum2);
}
