#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to an array of integers
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which cmp function
 *         does not return 0, or -1 if no element matches
 *         or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, count = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (count);
		count++;
	}

	return (-1);
}

