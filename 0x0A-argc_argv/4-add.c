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
	int sum = 0, i, track;

	for (i = 1; i < argc; i++)
	{
		track = 1;

		if (argv[i][0] == '-' && isdigit(argv[i][1]))
		{
			sum -= atoi(&argv[i][1]);
			continue;
		}

		if (!isdigit(argv[i][0]))
		{
			printf("%s\n", "Error");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	if (track)
	{
		printf("%d\n", sum);
		return 0;
	}

	else
	{
		printf("%d\n", sum);
		return 1;
	}
}

