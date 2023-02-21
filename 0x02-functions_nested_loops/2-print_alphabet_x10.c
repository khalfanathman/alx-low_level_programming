#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet(a-z) 10x
 *
 * Return : Always 0
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i <= 9; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
