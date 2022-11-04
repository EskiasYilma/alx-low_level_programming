#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		if (atoi(argv[1]) && atoi(argv[2]))
		{
			printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
			return (0);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (1);
}
