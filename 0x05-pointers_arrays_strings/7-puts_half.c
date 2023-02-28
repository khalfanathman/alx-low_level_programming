#include "main.h"
#include <string.h>

/**
 * puts_half - puts half of int
 *
 * @str: string to split
 */
void puts_half(char *str)
{
	int i;
	int oE = 0;

	if (strlen(str) % 2 != 0)
	{
		oE += 1;
	}
	for (i = (strlen(str) + oE) / 2; i < (int)(strlen(str)); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
