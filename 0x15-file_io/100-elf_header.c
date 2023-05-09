#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include "class_string.c"
#include "data_string.c"

#define O_BINARY 0
/**
 * main - Entry point of the program.
 * @ac: Number of command-line arguments.
 * @av: Array of command-line argument strings.
 *
 * This program reads the ELF header of a file specified as a cmd argument,
 * prints info about the ELF file format to the screen, and copies the file
 * to a destination file.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int ac, char **av)
{
	int fd, version;
	Elf64_Ehdr elf_header;
	char *class_string = "unknown";
	char *data_string = "unknown";
	char *magic_string  = "unknown";
	ssize_t read_size;

	if (ac < 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY | O_BINARY);
	if (fd == -1)
	{
		perror("open");
		return (1);
	}
	read_size =  read(fd, &elf_header, sizeof(Elf64_Ehdr));
	if (read_size != sizeof(Elf64_Ehdr))
	{
		printf("Error reading file.\n");
		close(fd);
		return (1);
	}
	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) == 0)
	{
		magic_string = "ELF";
	}
	class_string  = classic_str(class_string);
	data_string = data_str(data_string);
	version = elf_header.e_ident[EI_VERSION];
	/* // Print information to screen */
	printf("Magic: %s\n", magic_string);
	printf("Class: %s\n", class_string);
	printf("Data: %s\n", data_string);
	printf("Version: %d\n", version);
	close(fd);
	return (0);
}
