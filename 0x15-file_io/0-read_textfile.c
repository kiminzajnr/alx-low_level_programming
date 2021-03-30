#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 *
 * @filename: name of the file.
 * @letters: actual number of letters it could read and print.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, chars_read, chars_written;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	chars_read = read(fd, buf, letters);
	if (chars_read == -1)
		return (0);
	chars_written = write(STDOUT_FILENO, buf, chars_read);
	if (chars_written == -1)
		return (0);
	close(fd);
	free(buf);
	return (chars_written);
}
