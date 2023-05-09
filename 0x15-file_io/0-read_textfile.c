#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <error.h>
/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 *
 * @filename: the name of the file to read
 * @letters: the maximum number of letters to read and print
 *
 * Return: the actual number of letters it could read and print
 *         0 if the file cannot be opened or read
 *         0 if filename is NULL
 *         0 if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_lt = 0, written = 0;
	int fd = 0;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	read_lt = read(fd, buf, letters);
	if (read_lt == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	written = write(STDIN_FILENO, buf, read_lt);
	if (written == -1 || written != read_lt)
	{
		free(buf);
		close(fd);
		return (0);

	}
	close(fd);
	return (written);
}
