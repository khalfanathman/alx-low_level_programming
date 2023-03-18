#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes
 * @nmemb: Number of elements
 * @size: Size in bytes of each element
 *
 * Return: Ptr 2 alloctd mem or NULL if nmemb/size=0 or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *charac;

	if (nmemb == 0 || size == 0)
		return (NULL);

	charac = malloc(nmemb * size);
	memset(charac, 0, sizeof(*charac));





	if (charac == NULL)
		return (NULL);

	return (charac);
}

