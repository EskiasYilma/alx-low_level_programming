#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: pointer to an operational function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
