#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _puts_recursion - prints a string followed by a newline using recursion
 * @s: pointer to string to print
 *
 * Return: void
 */
void _puts_recursion(char *s);
/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: pointer to string to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s);

#endif /* MAIN_H */

