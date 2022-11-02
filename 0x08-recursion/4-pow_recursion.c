#include "main.h"

/**
 * _pow_recursion - returns the value of 'x' 
 * raised to the power of 'y'.
 * @x: number
 * @y: exponent
 * Return: returns the value of 'x' raised to the power of 'y'.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if ((x > 0 || x < 0) && y > 0)
		return (x * (_pow_recursion(x, y - 1)));
	else
		return (0);
}
