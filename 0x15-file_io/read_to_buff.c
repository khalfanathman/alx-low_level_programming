#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
/**
 * read_to_buff - Read from file and write to buffer
 * @fd_to: File descriptor to write to
 * @fd_from: File descriptor to read from
 * @str: String indicating the file name
 *
 * Description: Reads from the file descriptor @fd_from and writes
 *              the contents to the file descriptor @fd_to using a buffer.
 * Return: Number of bytes written (Success), -1 on error
 */
int read_to_buff(int fd_to, int fd_from, char *str)
{
	int writn, soma;
	char buff[1024];

	while ((soma = read(fd_from, buff, 1024)) > 0)
	{
		writn = write(fd_to, buff, soma);

		if (soma == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(99);
		}
	}

	return (writn);
}
