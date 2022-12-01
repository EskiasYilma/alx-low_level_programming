#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: unsigned long integer
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = sizeof(n) * 8 - 1;
	unsigned long int j, tmp;

	if (index > i)
		return (-1);

	tmp = index;
	j = 1;
	while (tmp > 0)
	{
		tmp--;
		j *= 2;
	}

	if ((*n >> index) & 1)
		*n = j

	return (1);
}
