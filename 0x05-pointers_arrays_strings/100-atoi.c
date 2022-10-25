#include "main.h"
#include <string.h>

/**
 * _atoi - convert a string to an integer
 * @s: pointer to source variable
 * Return: integer (success)
 */

int _atoi(char *s)
{
	int sign = -1;
	unsigned int c;
	unsigned int temp;
	int i, neg = 0;

	c = 0;
	temp = 0;

	while (s[i] != '\0')
	{
		if (str[i] == '-')
			neg *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			temp = (temp * 10) + (s[i] - '0');
			d = 1;
		}
 		else if (d == 1)
			break;
		i++;
	}
	return (temp);
}
