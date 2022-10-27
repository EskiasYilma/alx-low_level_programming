#include "main.h"

/**
 * print_buffer - prints a buffer.
 * @b: pointer
 * @size: buffer size
 * Return: Nothing
 */

void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%02x", *b);
		b++;
	}
	printf("\n");
}
