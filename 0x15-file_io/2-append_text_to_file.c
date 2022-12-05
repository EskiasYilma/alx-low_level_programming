#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_stat, text_len;
	int exists = access(filename, F_OK)
	int read_perm = access(filename, R_OK);
	int write_perm = access(filename, W_OK);


	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, S_IRWXU);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		if (exists != 0 || read_perm != 0 || write_perm != 0)
		{
			close(fd);
			return (-1);
		}
		close(fd);
		return (1);
	}

	text_len = _strlen(text_content);
	write_stat = write(fd, text_content, text_len);
	if (write_stat == -1)
		return (-1);
	if (close(fd) == -1)
		return (-1);
	return (1);
}
