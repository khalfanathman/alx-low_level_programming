#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <sys/types.h>
/**
 * _putchar - reads a text file and prints it to the POSIX standard output.
 * @c: the name of the file to read
 * Return: Always return 0;
 */
int _putchar(char c);
/**
 * read_textfile - reads a text file and prints it to the POSIX stndd output.
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 * Return: the number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file - creates a file and writes text_content to it
 * @filename: the name of the file to create
 * @text_content: the content to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content);

/**
 * append_text_to_file - appends text_content to the end of a file
 * @filename: the name of the file to append to
 * @text_content: the content to append to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content);
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
int read_to_buff(int fd_to,int fd_from, char *str);

#endif /* MAIN_H */
