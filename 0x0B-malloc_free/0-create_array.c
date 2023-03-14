#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char.
 * @size: unsigned int size of array
 * @c: char to initialize array
 *
 * Return: pointer to array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *charr;

	if (size == 0)
		return (NULL);

	charr = malloc(size * sizeof(c));

	if (charr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		charr[i] = c;

	return (charr);
}

