#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t r = size - 1;
	size_t l = 0, i, m;

	if (array == NULL || size == 0)
		return (-1);

	while (l <= r)
	{
		m = (l + r) / 2;
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[r]);

		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}

	return (-1);
}
