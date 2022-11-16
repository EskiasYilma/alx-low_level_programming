#include "function_pointers.h"

/**
 * f - operation identifier
 * @c: char
 * Return: Nothing
 */

void f(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
		_putchar(c[i]);
}

/**
 * print_name - prints a name
 * @name: name
 * @f: pointer to an operational function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
