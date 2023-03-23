#include <stddef.h>

/**
 * array_iterator - itrates over n arr n applies the prvidd func 2 each elm
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @action: pointer to a function that takes an int argument and returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		exit(98);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

