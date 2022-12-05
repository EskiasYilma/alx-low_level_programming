#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int _strlen(const char *s);

int create_file(const char *filename, char *text_content)
{
	int fd, write_stat, text_len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	text_len = _strlen(text_content);

	if (access(filename, F_OK) == 0)
		truncate(filename, text_len);

	write_stat = write(fd, text_content, text_len);
	if (write_stat == -1)
		return (-1);
	if (close(fd) == -1)
		return (-1);
	return (1);
}
