#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - length of linked list
 * @h: struct to go through
 * Return: amount of elements
 */
size_t listint_len(const listint_t *h)
{
	char *nodes;
	unsigned long int count = 0;

	nodes = malloc(sizeof(listint_t *));

	if (nodes == NULL)
	{
		exit(1);
	}

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	free(nodes);
	return (count);
}
