#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by a new
 * line
 * @separator: separator char
 * @n: number of args
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator && n)
	{

	for (i = 0; i < n; i++)
	{
		unsigned int x = va_arg(args, unsigned int);

		printf("%d", x);
		if (i != n - 1)
			printf("%s", separator);
	}
	}
	printf("\n");
	va_end(args);
}

