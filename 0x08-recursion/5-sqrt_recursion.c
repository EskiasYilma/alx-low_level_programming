#include "main.h"

/**
 * _helper - helper function
 * @n: number
 * @i: iteration
 * Return: natural square root of 'n'
 */

int _helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (_helper(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: natural square root of 'n'
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}
