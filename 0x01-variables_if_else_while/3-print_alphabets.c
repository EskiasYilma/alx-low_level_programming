#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char cletter;
	char sletter;

	cletter = 'A';
	sletter = 'a';

	while (sletter <= 'z')
	{
		putchar(sletter);
		sletter++;
	}
	while (cletter <= 'Z')
	{
		putchar(cletter);
		cletter++;
	}
	putchar('\n');
	return (0);

}

