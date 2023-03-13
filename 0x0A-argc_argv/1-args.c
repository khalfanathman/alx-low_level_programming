#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc)
{
	UNUSED(argv);
	printf("%d\n", argc - 1);

	return (0);
}

