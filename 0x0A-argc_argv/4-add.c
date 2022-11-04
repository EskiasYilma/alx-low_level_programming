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
	int i, res = 0, char_count = 0, num_count = 0;

	i = 1;
	while (argv[i])
	{
		if (!atoi(argv[i]))
			char_count++;
		if (atoi(argv[i]))
			num_count++;
		i++;
	}

	if (char_count != 0 && char_count < argc - 1)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 1 || num_count == 0)
	{
		printf("0\n");
		return (0);
	}
	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			if (atoi(argv[i]))
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
