#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * flag_str - string flag
 * @s: string
 */
void flag_str(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * flag_int - integer flag
 * @i: integer
 */

void flag_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * flag_float - float flag
 * @f: float
 */

void flag_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * flag_char - character flag
 * @c: char
 */

void flag_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_all - prints anything
 * @format: flags
 */

void print_all(const char * const format, ...)
{
	char *sep;
	unsigned int i, j;
	va_list args;

	v_flags flags[] = {
		{"c", flag_char},
		{"i", flag_int},
		{"f", flag_float},
		{"s", flag_str},
		{NULL, NULL}
	};

	va_start(args, format);
	i = 0;
	j = 0;
	sep = "";

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*flags[j].c_flag == format[i])
			{
				printf("%s", sep);
				flags[j].f(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
