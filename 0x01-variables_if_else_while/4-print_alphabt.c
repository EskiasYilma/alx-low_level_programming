#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char sletter;

	for (sletter = 'a'; sletter <= 'z'; sletter++)
	{
		if (sletter != "e" && sletter != 'q')
			putchar(sletter);
	}
	putchar('\n');
	return (0);

}

