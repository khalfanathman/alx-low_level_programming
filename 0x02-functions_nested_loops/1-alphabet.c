#include "main.h"

/**
 * print_alphabet - prints alphabet(a-z) 10x
 *
 * Return : Always 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return ;
}

