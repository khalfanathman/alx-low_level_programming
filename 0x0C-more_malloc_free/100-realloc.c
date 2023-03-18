#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocate memory block
 *
 * @ptr: Pointer to the memory previously allocated with malloc(old_size)
 * @old_size: Size, in bytes, of the allocated space for ptr
 * @new_size: New size, in bytes, of the new memory block
 *
 * Return: Pointer to the reallocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;
	unsigned int i;

	/* If new size is zero, free memory and return NULL */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, allocate new memory block with malloc */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
	}

	else
	{
		/* Allocate new memory block with malloc */
		new_ptr = malloc(new_size);

		if (new_ptr != NULL)
		{
			/* Copy contents of old memory block to new memory block */
			char *src = (char *)ptr;
			char *dest = (char *)new_ptr;
			unsigned int copy_size = old_size < new_size ? old_size : new_size;

			for (i = 0; i < copy_size; i++)
			{
				*dest++ = *src++;
			}

			/* Free old memory block */
			free(ptr);
		}
	}

	return (new_ptr);
}

