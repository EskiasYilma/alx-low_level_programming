#include "main.h"

/**
 * _isupper - checks if a char is uppercase
 * @c: char to test for being uppercase or not
 * Return: 1 if char is upper case, else Return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
