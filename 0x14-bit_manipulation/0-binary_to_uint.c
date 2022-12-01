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

/**
 * _strlen - returns the length of a string.
 * @s: pointer to a constant character variable
 * Return: length of the character variable
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * _ctoi - convert a char to an integer
 * @s: character
 * Return: integer (success)
 */

int _ctoi(char s)
{
	return ((unsigned int) s - '0');
}

/**
 * binary_to_uint - convert a binary to an unsigned integer
 * @b: String Pointer
 * Return: unsigned integer (success)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, sum = 0;

	if (!b)
		return (0);

	j = _strlen(b);
	for (i = 0; b[i] != '\0'; i++, j--)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		sum += _pow_recursion(2, (j - 1)) * _ctoi(b[i]);
	}
	return (sum);
}
