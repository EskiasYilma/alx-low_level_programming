#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: unsigned long integer
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = sizeof(n) * 8 - 1;
	unsigned long int j;

	if (index > i)
		return (-1);

	j = 1;
	while (index > 0)
	{
		index--;
		j *= 2;
	}

	*n += j;
	return (1);
}
