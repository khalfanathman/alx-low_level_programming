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
 * _strlen_recursion - returns the length of a string using recursion
 * @s: pointer to string to measure
 *
 * Return: integer length of the string
 */
int _strlen_recursion(char *s);

/**
 * factorial - returns the factorial of a given number
 * @n: integer to compute factorial of
 *
 * Return: integer factorial of n
 */
int factorial(int n);

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: integer base
 * @y: integer exponent
 *
 * Return: integer x raised to the power of y
 */
int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - returns the natural square root of a number using recursion
 * @n: integer to find the square root of
 *
 * Return: integer square root of n
 */
int _sqrt_recursion(int n);

/**
 * is_prime_number - checks if a number is prime
 * @n: integer to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n);

/**
 * is_palindrome - checks if a string is a palindrome using recursion
 * @s: pointer to string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s);

/**
 * wildcmp - compares two strings with support for wildcard characters
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: 1 if the strings match, 0 otherwise
 */
int wildcmp(char *s1, char *s2);

#endif /* MAIN_H */ 


