#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int bit_position = 31;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((n >> bit_position) == 0)
	{
		bit_position--;
	}
	while (bit_position >= 0)
	{
		_putchar((n >> bit_position) & 1 ? '1' : '0');
		bit_position--;
	}

}
