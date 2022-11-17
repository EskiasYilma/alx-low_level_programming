#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 * @n: number of parameters
 * Return: Sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		unsigned int x = va_arg(args, unsigned int);

		sum += x;
	}
	va_end(args);
	return (sum);
}
