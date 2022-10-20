#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @c: char to test for being a digit
 * Return: 1 if char is digit, else Return 0
 */

int _isdigit(int c)
{
	if (c >= -9 && c <= 9)
		return (1);
	else
		return (0);
}
