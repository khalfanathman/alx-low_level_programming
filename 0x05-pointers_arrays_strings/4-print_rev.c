#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		if (s[i] != '\n')
		{
			_putchar("%c", s[i]);
		}
		i--;
	}
	_putchar("\n");
}
