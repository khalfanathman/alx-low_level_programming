#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

/**
 * append_text_to_file - Appends a string to a file
 * @filename: The name of the file to append to
 * @text_content: The string to append to the file (may be NULL)
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) == 0)
	{
		fd = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);

		if (fd == -1)
			return (-1);

		if (text_content != NULL)
		{
			/* Write the string to the file */
			write(fd, text_content, sizeof(text_content) - 1);
		}

		close(fd);
		return (1);
	}

	else
	{
		return (-1);
	}

	return (1);
}
