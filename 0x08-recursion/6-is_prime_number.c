#include "main.h"

/**
 * _helper - helper function
 * @n: number
 * @i: iteration
 * Return: natural square root of 'n'
 */

int _helper(int n, int i)
{
	if ((n <= 1 && n >= 0) || n < 0)
		return (0);
	if (i > 1 && n % i == 0 && n != i)
		return (0);
	else if (i > 1 && n % i != 0 && n != i)
		return (_helper(n, i + 1));
	else
		return (1);
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number
 * Return: 1 if prime, 0 if not prime
 */

int is_prime_number(int n)
{
	return (_helper(n, 2));
}
