#include <stdio.h>

/**
 * main - prints a string
 * @c: it is cahracter passed to _putchar function
 * Return: ALways returns 0
 */

int _putchar(char c);

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
