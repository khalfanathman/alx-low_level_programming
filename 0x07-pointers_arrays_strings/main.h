#ifndef MAIN_H_
#define MAIN_H_

/* Prototype for _memset function
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
#endif /* MAIN_H_ */

