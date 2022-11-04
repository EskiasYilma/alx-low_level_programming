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
	int i = 1;
	int res = 0;

	if (argc == 1 || (argc <= 2 && atoi(argv[1]) <= 0))
	{
		printf("0\n");
		return (0);
	}
	if (argc > 1)
	{
		while (i < argc)
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
