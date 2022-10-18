#include <stdio.h>
#include "main.h"

/**
 * main - Entry point.
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	int m;

	m = 0;
	for (n = 3; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			m += n;
		}
	}
	printf("%d\n", m);
	return (0);
}
