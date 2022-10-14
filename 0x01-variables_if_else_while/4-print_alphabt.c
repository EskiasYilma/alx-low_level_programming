#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char sletter;

	sletter = 'a';

	while (sletter <= 'z')
	{
		if (sletter == "e" || sletter == 'q')
			sletter++;
		putchar(sletter);
		sletter++;
	}
	putchar('\n');
	return (0);

}

