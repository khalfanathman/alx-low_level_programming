#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocate memory for a two-dimensional array of integers
 *              with the specified width and height, and initialize all
 *              elements to zero.
 *
 * @width: The width of the two-dimensional array.
 * @height: The height of the two-dimensional array.
 *
 * Return: If the width or height is zero or if the allocation fails, return
 *         NULL. Otherwise, return a pointer to the two-dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int **two_darr, i, j;

	/* Check for invalid dimensions */
	if (width == 0 || height == 0)
		return (NULL);

	/* Allocate memory for height pointers to integers */
	two_darr = malloc(height * sizeof(int *));

	if (two_darr == NULL)
		return (NULL);

	/* Allocate memory for each row of the two-dimensional array */
	for (i = 0; i < height; i++)
	{
		two_darr[i] = malloc(width * sizeof(int));

		if (two_darr[i] == NULL)
		{
			/* Free all previously allocated memory */
			for (j = 0; j < i; j++)
				free(two_darr[j]);

			free(two_darr);
			return (NULL);
		}

		/* Initialize each element of the row to zero */
		for (j = 0; j < width; j++)
			two_darr[i][j] = 0;
	}

	return (two_darr);
}

