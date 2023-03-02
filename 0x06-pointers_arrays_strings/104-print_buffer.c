#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints the content of a buffer in hex and ascii
 * @b: pointer to the buffer
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;
	unsigned char c;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);
		for (j = 0; j < 10 && i + j < size; j++)
		{
			c = (unsigned char) b[i + j];
			printf("%02x ", c);
		}
		printf(" ");

		for (j = 0; j < 10 && i + j < size; j++)
		{
			c = (unsigned char) b[i + j];
			if (isprint(c))
				printf("%c", c);
			else
				printf(".");
		}
		printf("\n");
	}
}
