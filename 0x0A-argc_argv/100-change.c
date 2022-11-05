#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int sum, i, count;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) == 1)
	{
		printf("%d\n", 1);
		return (0);
	}
	if (atoi(argv[1]) > 0)
		sum = atoi(argv[1]);
	else
	{
		printf("0\n");
		return (0);
	}
	count = 0;

	if (sum > 1)
	{
		while (sum > 1)
		{
			for (i = 0; cents[i] != '\0'; i++)
			{
				if (sum >= cents[i])
				{
					count += sum / cents[i];
					sum = sum % cents[i];
				}
			}
		}
		if (sum == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}

}
