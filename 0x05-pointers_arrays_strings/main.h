#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes a character to the standard output.
 * @c: the character to print.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * reset_to_98 - updates the value of an integer to 98.
 * @n: pointer to integer to update.
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to first integer.
 * @b: pointer to second integer.
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string.
 * @s: pointer to string.
 * Return: length of string.
 */
int _strlen(char *s);

/**
 * _puts - prints a string to stdout.
 * @str: pointer to string.
 */
void _puts(char *str);

/**
 * print_rev - prints a string in reverse to stdout.
 * @s: pointer to string.
 */
void print_rev(char *s);

/**
 * rev_string - reverses a string.
 * @s: pointer to string.
 */
void rev_string(char *s);

/**
 * puts2 - prints every other character of a string.
 * @str: pointer to string.
 */
void puts2(char *str);

/**
 * puts_half - prints the second half of a string.
 * @str: pointer to string.
 */
void puts_half(char *str);

/**
 * print_array - prints n elements of an integer array.
 * @a: pointer to integer array.
 * @n: number of elements to print.
 */
void print_array(int *a, int n);

/**
 * _strcpy - copies a string to a destination buffer.
 * @dest: pointer to destination buffer.
 * @src: pointer to source string.
 * Return: pointer to destination buffer.
 */
char *_strcpy(char *dest, char *src);

#endif /* MAIN_H */

