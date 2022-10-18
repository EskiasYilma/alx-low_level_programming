#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @c: int to test
 * Return: d (the absolute value of an iteger)
 */

int _abs(int c)
{
	int d;

	if (c > 0)
	{
		d = c;
	}
	else
	{
		d = (c * -1);
	}
	return (d);
}
