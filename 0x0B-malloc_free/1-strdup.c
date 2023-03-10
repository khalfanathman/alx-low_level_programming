#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string in a new memory location.
 * @str: pointer to the string to be duplicated.
 * Return: pointer to the newly duplicated string.
 */
char *_strdup(char *str)
{
	int i, j, length = 1;
	char *strng;

	/* Determine the length of the string */
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}


	/* Allocate memory for the duplicated string */
	strng = malloc(length * sizeof(char));

	if (strng == NULL)
		return (NULL);

	/* Copy the string to the newly allocated memory */
	for (j = 0; j < length; j++)
		strng[j] = str[j];

	return (strng);
}


