#include "main.h"
#include <string.h>

/**
 * _atoi - convert a string to an integer
 * @s: pointer to source variable
 * Return: integer (success)
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int c = 0;
	unsigned int temp;
	int len, i, neg = 0;

	len = strlen(s);

	while ((s[i] == '-' || (s[i] == '+' || s[i] == ' ')) || (!(s[i] >= '0' && s[i] <= '9')))
	{
		if (s[i] == '-')
			neg++;
		if (s[i] == '\0')
			break;
		i++;
	}
	if (neg % 2 != 0)
		sign = -sign;

	do {
		if (!(s[i] >= '0' && s[i] <= '9'))
			break;
		c = (c * 10) + (s[i] - '0');
		i++;
	} while (i <= len);

	temp = c * sign;
	return (temp);
}
