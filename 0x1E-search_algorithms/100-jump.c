#include "search_algos.h"
/**
 * jump_search -  searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int l = 0, r = step, i;

	if (array == NULL || size == 0)
		return (-1);

	while (r < (int)size && array[r] < value)
	{
		printf("Value checked array[%d] = [%d]\n", l, array[l]);
		l = r;
		r += step;
	}

	printf("Value found between indexes [%d] and [%d]\n", l, r);

	if (r < (int)size)
	{
		r = r;
	}
	else
	{
		r = (int)size - 1;
	}


	for (i = l; i <= r && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
