#include <stdio.h>

/**
 * main - A program that prints the number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", argc);
	return (0);
}
