#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include "read_to_buff.c"

/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument vector
 *
 * Description: Copies the contents of one file to another file.
 *              Usage: cp file_from file_to
 * Return: Always 0 (Success)
 */

int main(int ac, char **av)
{
	int fd_from, fd_to, soma = 0;
	/* char buff[1024]; */

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	read_to_buff(fd_to, fd_from, av[2]);
	if (soma == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_to);
		exit(100);
	}
	return (0);
}
