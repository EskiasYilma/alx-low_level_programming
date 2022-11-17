#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings separated by a separator
 * @separator: separator
 * @n: number of args
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strings;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		strings = va_arg(args, char *);
		if (strings == NULL)
			printf("(nil)");
		printf("%s", strings);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}

