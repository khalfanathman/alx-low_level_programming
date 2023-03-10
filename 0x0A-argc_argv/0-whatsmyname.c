#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments provided
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on success
 */

int main(int argc, char* argv[])
{	int i;

	for (i = 0; i< argc; i++)
		printf("%s", argv[i]);

	printf("\n");
	return (0);
}
