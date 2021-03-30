#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_file - creates a file.
 *
 * @filename: name of the file to create.
 * @text_content: NULL terminated string to write to a file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, chars_written, str_len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[str_len])
			str_len++;
		chars_written = write(fd, text_content, str_len);
		if (chars_written != str_len)
			return (-1);
	}
	close(fd);
	return (1);
}
