#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point, calculate the minimum number of coins required to
 *        make change for an amount of money
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int coin = 0, cents;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
		{
			coin += cents / 25;
			cents %= 25;
		}
		else if (cents >= 10)
		{
			coin += cents / 10;
			cents %= 10;
		}
		else if (cents >= 5)
		{
			coin += cents / 5;
			cents %= 5;
		}
		else if (cents >= 2)
		{
			coin += cents / 2;
			cents %= 2;
		}
		else if (cents >= 1)
		{
			coin += cents;
			cents = 0;
		}
	}
	printf("%d\n", coin);
	return (0);
}

