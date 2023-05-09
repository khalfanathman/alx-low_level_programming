#include <elf.h>
/**
 * classic_str - Determine the class of the ELF file.
 * @class_string: String to store the class information.
 *
 * This function determines the class of the ELF file by checking the value of
 * the e_ident[EI_CLASS] field in the ELF header. It sets the class_string
 * accordingly and returns it.
 *
 * Return: The updated class_string.
 */
char *classic_str(char *class_string)
{
	Elf64_Ehdr elf_header;
    memset(&elf_header, 0, sizeof(Elf32_Ehdr));

	if (elf_header.e_ident[EI_CLASS] == ELFCLASS32)
	{
		class_string = "32-bit";
	}

	else if (elf_header.e_ident[EI_CLASS] == ELFCLASS64)
	{
		class_string = "64-bit";
	}

	return (class_string);
}
