#ifndef MAIN_H_
#define MAIN_H_

/**
 * _memset - function that returns a pointer
 *  to the memory area s
 * @s: pointer to memory area
 * @b: constant byte used to set memory area
 * @n: number of bytes to set
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n);
/**
 * _memcpy - function that copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to be copied
 *
 * Return: a pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _strchr - function that locates a character in a string
 * @s: pointer to the string
 * @c: character to be located
 *
 * Return: a pointer to the
 *  first occurrence of the character c in
 *  the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c);

/**
 * _strspn - function that calculates the length of a prefix substring
 * @s: pointer to the string
 * @accept: pointer to the string containing the characters to match
 *
 * Return: the number of bytes in
 *  the initial segment of s which consist only of
 *  bytes from accept
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to the string
 * @accept: pointer to the string containing the characters to search for
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept);
#endif /* MAIN_H_ */

