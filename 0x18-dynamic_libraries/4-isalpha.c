#include "main.h"

/**
 * _isalpha - checks if a char is lowercase or uppercase
 * @c: char to test
 * Return: 1 if char is alpha, else Return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
