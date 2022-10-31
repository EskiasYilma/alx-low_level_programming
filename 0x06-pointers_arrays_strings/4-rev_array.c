#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array
 * @n: array size
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp = 0;

	while (start <= end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}