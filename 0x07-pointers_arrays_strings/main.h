#ifndef MAIN_H_
#define MAIN_H_

/**
 * _memset - fill memory with a constant byte
 * @s: pointer to memory area to fill
 * @b: value to set
 * @n: number of bytes to set
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copy memory area
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locate character in string
 * @s: pointer to string
 * @c: character to locate
 *
 * Return: pointer to first occurrence of character c in string s or NULL if not found
 */
char *_strchr(char *s, char c);

/**
 * _strspn - get length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to string containing characters to match
 *
 * Return: number of bytes in the initial segment of s consisting of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strstr - locate a substring
 * @haystack: pointer to string
 * @needle: pointer to substring
 *
 * Return: pointer to the beginning of the located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle);

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search through
 * @accept: the set of bytes to search for
 *
 * Return: a pointer to the byte in `s` that matches one of the bytes in `accept`
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept);

/**
 * print_chessboard - print the chessboard
 * @a: pointer to array of 8 arrays of 8 characters each
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - print the sums of the two diagonals of a square matrix of integers
 * @a: pointer to the square matrix of integers
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size);

/**
 * _puchar - prints char at a time
 * @c: cahracter to output
 */
void _putchar(char c);
#endif /* MAIN_H_ */

