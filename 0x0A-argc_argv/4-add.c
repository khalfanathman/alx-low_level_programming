#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, 1 if error occurs
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i][0]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

