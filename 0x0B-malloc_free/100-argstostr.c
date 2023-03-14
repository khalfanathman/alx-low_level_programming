#include <stdlib.h>

/**
 * argstostr - Concatenates all the strings in an array into a single string,
 *             separated by newline characters.
 *
 * @ac: The number of strings in the array.
 * @av: An array of strings.
 *
 * Return: If memory allocation fails or if @ac is 0 or @av is NULL, return
 *         NULL. Otherwise, return a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, *length;
	char *fin_string, *p;

	length = malloc(ac * sizeof(int));
	return ((length == NULL) ? (NULL) : 0);
	/* Compute the length of each string and store it in the length array */
	for (i = 0; i < ac; i++)
	{
		length[i] = 0;

		for (j = 0; av[i][j] != '\0'; j++)
			length[i]++;
	}
	/* Allocate memory for the final string */
	fin_string = malloc((ac + 1) * sizeof(char *));
	if (fin_string == NULL)
	{
		free(length);
		return (NULL);
	}
	p = fin_string;
	/*
	 * Copy each string into the final string, separated by newline characters
	 * and terminate the final string with a null character.
	 */
	for (i = 0; i < ac; i++)
	{
		for (k = 0; k <= length[i]; k++)
		{
			if (k == length[i])
				*p++ = '\n';

			else
				*p++ = av[i][k];
		}
	}
	*p = '\0';
	free(length);
	return (fin_string);
}

