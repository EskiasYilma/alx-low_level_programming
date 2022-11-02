#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number
 * Return: factorial of 'n'
 */

int factorial(int n)
{
	if (n > 1)
		return (n * factorial(n - 1));
	return (1);
}
