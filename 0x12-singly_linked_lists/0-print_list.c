#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		/* print the current node */
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
            
		}

		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		/* move to the next node */
		h = h->next;
		nodes++;
	}

	return (nodes);
}
