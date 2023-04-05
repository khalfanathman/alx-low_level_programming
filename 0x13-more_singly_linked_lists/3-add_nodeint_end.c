#include "lists.h"
/**
 * add_nodeint_end - adds node at the end
 * @head: head of node linked list
 * @n: value to put new node at end
 * Return: struct
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = malloc(sizeof(listint_t));
	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (temp == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = new;
		return (new);
	}
}
