#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * create_file - Creates a file and writes a string to it
 * @filename: The name of the file to create
 * @text_content: The string to write to the file (may be NULL)
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, writn = 0, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* Get the length of the string */
		while (text_content[len] != '\0')
			len++;

		/* Write the string to the file */
		writn = write(fd, text_content, len);

		if (writn == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close the file descriptor and return success */
	close(fd);
	return (1);
}
