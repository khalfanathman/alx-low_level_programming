#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

#ifndef NULL
#define NULL ((void *)0)
#endif

/**
 * free_dog - frees a dog structure
 * @d: pointer to dog structure
 *
 * Description: frees the memory allocated for a dog structure
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
