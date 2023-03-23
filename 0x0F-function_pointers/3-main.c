#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point function
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *ch = argv[2];
	char *str1 = "/", *str2 = "%";

	/* Check if the number of arguments is correct */
	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	/*
	 * Check if the function corresponding to the operator is not NULL
	 * and execute it
	 */
	if (get_op_func(ch) != NULL && get_op_func(ch)(num1, num2))
	{
		printf("%d\n", get_op_func(ch)(num1, num2));
		return (0);
	}

	else
	{
		printf("%s\n", "Error");
		exit(99);
	}

	if (argv[3] == 0 && (argv[2] == str1 || argv[2] == str2))
	{
		printf("%s\n", "Error");
		exit(100);
	}

	return (0);
}

