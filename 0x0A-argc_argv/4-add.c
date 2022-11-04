#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	int res = 0;
	int count = 0;

	i = 0;
	while (argv[i])
	{
		if (!atoi(argv[i]))
			count++;
		i++;
	}
	if (count == argc - 1)
	{
		printf("0\n");
		return (0);
	}

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	if (argc > 1)
	{
		while (argv[i])
		{
			if (atoi(argv[i]) && atoi(argv[i]) >= 0)
				res += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
	}
	printf("%d\n", res);
	return (0);
}
