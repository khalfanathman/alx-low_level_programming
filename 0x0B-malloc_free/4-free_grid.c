#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Deallocate memory that was previously allocated by alloc_grid().
 *
 * @grid: Pointer to the two-dimensional array to deallocate.
 * @height: The height of the two-dimensional array.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	/* Free each row of the 2D array */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Free the array of row pointers */
	free(grid);
}

