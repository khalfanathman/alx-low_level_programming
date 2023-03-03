#include <ctype.h>
#include <stdio.h>

/**
 * print_buffer - prints the content of a buffer in hex and ascii
 * @b: pointer to the buffer
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i, j, k, count;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i, count = 0; j < i + 10; j++, count++)
		{
			if (count == 2)
			{
				printf(" ");
				count = 0;
			}
			if (j >= size)
				printf("  ");
			else
				printf("%02x", b[j]);
		}
		printf(" ");
		for (k = i; k < i + 10 && k < size; k++)
			printf("%c", isprint(b[k]) ? b[k] : '.');
		printf("\n");
	}
}
