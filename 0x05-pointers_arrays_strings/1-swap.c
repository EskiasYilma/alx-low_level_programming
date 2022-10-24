#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer variable
 * @b: pointer variable
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	int m = *b;
	*a = m;
	*b = n;
}
