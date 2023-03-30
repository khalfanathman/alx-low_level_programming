#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
/**
 * print_list - Prints all the elements of a linked list.
 *
 * @h: Pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h);

#endif  /* LISTS_H */