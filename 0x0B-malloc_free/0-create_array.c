#include  "main.h"

#include <stdio.h>

char *create_array(unsigned int size, char c)
{
	int *arr, i;
	
	if (size == 0)
	{
		return (NULL);	
	}
	arr = malloc(size * sizeof(c));

	{
	for ( i = 0; i <= size; i++)
	{
		arr[i] = c;
	}
	if (arr == NULL)
	{
		return (NULL);	
	}
	else
	{
		return (arr);
	}

}
