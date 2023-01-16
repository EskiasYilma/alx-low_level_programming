#include "main.h"

/**
 * _islower - checks if a char is lowercase
 * @c: char to test for being lowercase or not
 * Return: 1 if char is lower case, else Return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
