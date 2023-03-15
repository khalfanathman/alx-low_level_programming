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
	
	int i, k, len = 0;
	char *p, *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;

	str = malloc(len + ac + 1);

	if (str == NULL)
		return (NULL);

	p = str;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			*p++ = av[i][j];

		*p++ = '\n';
	}

	*p = '\0';
	return (str);
}

