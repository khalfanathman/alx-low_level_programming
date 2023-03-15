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
	int i, k, len, *length;
	char *fin_string, *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = malloc(ac * sizeof(int));
	if (length == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
			len++;
		length[i] = len;
	}
	fin_string = malloc((ac + 1) * sizeof(char *));
	if (fin_string == NULL)
	{
		free(length);
		return (NULL);
	}
	p = fin_string;
	for (i = 0; i < ac; i++)
	{
		for (k = 0; k < length[i]; k++)
			*p++ = av[i][k];
		*p++ = '\n';
	}
	*p = '\0';
	free(length);
	return (fin_string);
}

