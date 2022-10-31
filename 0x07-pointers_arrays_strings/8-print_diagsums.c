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
	int i;
	int array_size;
	int sum;

	array_size = size * size;
	sum = 0;
	i = 0;
	while (i < array_size)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++;
	}
	printf("%d, ", sum);

	sum = 0;
	i = 0;
	while (i < array_size)
	{
		if (i % (size - 1) == 0 && i != (array_size - 1) && i != 0)
			sum += a[i];
		i++;
	}

	printf("%d\n", sum);
}
