#include "main.h"
#include <string.h>

/**
 * _atoi - convert a string to an integer
 * @s: pointer to source variable
 * Return: integer (success)
 */

int _atoi(char *s)
{
	int sign;
	int temp;
	int i, d;

	temp = 0;
	sign = -1;
	i = 0;
	d = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			temp = (temp * 10) - (s[i] - '0');
			d = 1;
		}
		else if (d == 1)
			break;
		i++;
	}
	temp = temp * sign;
	return (temp);
}
