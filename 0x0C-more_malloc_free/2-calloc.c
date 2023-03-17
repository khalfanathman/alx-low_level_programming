#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes
 * @nmemb: Number of elements
 * @size: Size in bytes of each element
 *
 * Return: Ptr 2 alloctd mem or NULL if nmemb/size=0 or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *charac;

	if (nmemb == 0 || size == 0)
		return (NULL);

	charac = malloc(nmemb * size);

	if (charac == NULL)
		return (NULL);

	return (charac);
}

