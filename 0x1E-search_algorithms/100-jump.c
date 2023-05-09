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
    size_t l = 0, i, r = 0;
    size_t step = sqrt(size);

    if (array == NULL || size == 0)
        return (-1);

    while (r < size && array[r] < value)
    {
        printf("Value checked array[%ld] = [%d]\n", r, array[r]);
        l = r;
        r += step;
    }

    printf("Value found between indexes [%ld] and [%ld]\n", l, r);

    if (r < size)
    {
        r = r;
    }
    else
    {
        r = size - 1;
    }

    i = l;
    while (i <= r)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
        i++;
    }

    return (-1);
}
