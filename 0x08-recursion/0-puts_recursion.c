#include "main.h"


/**
 * _puts_recursion - prints a string recursively
 * @s: the string to print
 */
void _puts_recursion(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
	{
		_putchar('\n');
	}
}

