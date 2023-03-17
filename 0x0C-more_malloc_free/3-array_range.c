#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value to include in the array
 * @max: maximum value to include in the array
 *
 * Return: pointer to the newly created array
 *         NULL if the allocation fails or if min > max
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, range;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;
	arr = malloc(range * sizeof(int));

	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}

	return (arr);
}

