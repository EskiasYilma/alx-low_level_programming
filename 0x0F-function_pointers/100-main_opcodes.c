#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	char *p;
	int i, j;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (char *)main;
	j = 0;
	while (j < i)
	{
		printf("%02x", p[j] & 0xff);
		if (j != i - 1)
			printf(" ");
		j++;
	}
	printf("\n");
	return (0);
}
