#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char sletter;

	sletter = 'z';

	while (sletter >= 'a')
	{
		putchar(sletter);
		sletter--;
	}
	putchar('\n');
	return (0);

}

