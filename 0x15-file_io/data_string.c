#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * data_str - Determine the data encoding of the ELF file.
 * @data_string: String to store the data encoding information.
 *
 * This func determines the data encoding of the ELF file by chckn the value of
 * the e_ident[EI_DATA] field in the ELF header. It sets the data_string
 * accordingly and returns it.
 *
 * Return: The updated data_string.
 */
char *data_str(char *data_string)
{
	Elf64_Ehdr elf_header;
    memset(&elf_header, 0, sizeof(Elf32_Ehdr));
	if (elf_header.e_ident[EI_DATA] == ELFDATA2LSB)
	{
		data_string = "little-endian";
	}

	else if (elf_header.e_ident[EI_DATA] == ELFDATA2MSB)
	{
		data_string = "big-endian";
	}

	return (data_string);

}
