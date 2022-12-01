#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: unsigned long integer 1
 * @m: unsigned long integer 2
 * Return: returns the number of bits you would need to flip
 * to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = sizeof(n) * 8 - 1, tmp;
	unsigned long int j;

	j = (n ^ m);
	tmp = 0;

	while (i >= 0)
	{
		if ((j >> i) & 1)
		{
			tmp++;
		}
		i--;
	}

	return (tmp);
}
