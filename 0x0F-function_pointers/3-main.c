#include "3-calc.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */


int main(int argc, char **argv)
{
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if (!(get_op_func(argv[2])))
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", (get_op_func(argv[2])(n1, n2)));
	return (0);
}
