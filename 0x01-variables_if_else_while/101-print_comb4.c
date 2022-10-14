#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int n;
	int m;
	int o;

	for (n = 0; n <= 9; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			for (o = m + 1; o <= 9; o++)
			{
				if ((n != m) != o)
				{
					putchar(n % 10 + '0');
					putchar(m % 10 + '0');
					putchar(o % 10 + '0');
					if (n != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

