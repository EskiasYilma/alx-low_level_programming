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
	int char_count = 0;
	int num_count = 0;

	i = 1;
	while (argv[i])
	{
		if (!atoi(argv[i]))
			char_count++;
		if (atoi(argv[i]))
			num_count++;
		i++;
	}
	if (count == argc - 1)
	{
		printf("0\n");
		return (0);
	}
	if (num_count < argc - 1)
	{
		printf("Error\n");
		return(1);
	}

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	i = 1;
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
