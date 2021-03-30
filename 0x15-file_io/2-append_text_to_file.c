#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: name of the file.
 * @text_content: the NULL terminated string to add at the end
 * of the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, chars_appended, str_len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[str_len])
			str_len++;
		chars_appended = write(fd, text_content, str_len);
		if (chars_appended != str_len)
			return (-1);
	}
	close(fd);
	return (1);
}
