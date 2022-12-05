#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: filename
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int txf;
	size_t read_stat = 0, write_stat = 0;
	char *buf;

	if (filename == NULL)
		return (0);
	txf = open(filename, O_RDONLY);
	if (txf == -1)
		return (0);

	buf = (char *) malloc(letters + 1);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	read_stat = read(txf, buf, letters);
	buf[letters + 1] = '\0';
	if (read_stat == -1)
		return (0);

	write_stat = write(STDOUT_FILENO, buf, read_stat);
	if (write_stat != read_stat || write_stat == -1)
		return (0);
	free(buf);
	close(txf);
	return (write_stat);
}
