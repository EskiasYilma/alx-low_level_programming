#include "main.h"

#define E_O STDERR_FILENO
/**
 * main - displays the information contained in the ELF
 * header at the start of an ELF file.
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 (Success)
 */

int main(int __attribute__((__unused__)) argc, char **argv)
{
	int fd;

	if (argc != 2)
		dprintf(E_O, "Usage: elf_header elf_filename\n"), exit(98);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(E_O, "Error: Can't read file %s\n", argv[1]), exit(98);
	return (0);
}
