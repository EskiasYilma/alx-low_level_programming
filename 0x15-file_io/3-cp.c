#include "main.h"

#define BUFSIZE 1024
#define E_O STDERR_FILENO

/**
 * main - a program that copies the content of a file to another file.
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	char from_text[BUFSIZE];
	int from_file, to_file, read_stat, write_stat, close_from, close_to;

	if (argc != 3)
		dprintf(E_O, "Usage: cp from_text file_to\n"), exit(97);
	from_file = open(argv[1], O_RDONLY);
	if (from_file == -1)
		dprintf(E_O, "Error: Can't read from file %s\n", argv[1]), exit(98);
	to_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_file == -1)
		dprintf(E_O, "Error: Can't write to %s\n", argv[2]), exit(99);

	read_stat = 1;
	while (read_stat)
	{
		read_stat = read(from_file, from_text, BUFSIZE);
		if (read_stat == -1)
			dprintf(E_O, "Error: Can't read from file %s\n", argv[1]), exit(98);
		if (read_stat > 0)
		{
			write_stat = write(to_file, from_text, (size_t) read_stat);
			if (write_stat == -1 || write_stat != read_stat)
				dprintf(E_O, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	close_from = close(from_file);
	if (close_from == -1)
		dprintf(E_O, "Error: Can't close fd %d\n", from_file), exit(100);
	close_to = close(to_file);
	if (close_to == -1)
		dprintf(E_O, "Error: Can't close fd %d\n", to_file), exit(100);
	return (0);
}
