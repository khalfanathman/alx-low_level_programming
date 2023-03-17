#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Author: [Your name here]
 * Desc: Header file containing function prototypes for memory allocation
 *       and manipulation functions.
 */

/**
 * malloc_checked - Allocates memory using malloc.
 *
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b);

/**
 * string_nconcat -  Concates 2 strs, up to a max of n bytes frm s2.
 *
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 * @n: The maximum number of bytes to concatenate from s2.
 *
 * Return: A pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - Allocates memory for an array, initialized to zero.
 *
 * @nmemb: The number of elements to allocate.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range - Crtes an arr of ints, stin at min and ends at max (inclusive).
 *
 * @min: The minimum value for the array.
 * @max: The maximum value for the array.
 *
 * Return: A pointer to the newly-created array.
 */
int *array_range(int min, int max);

/**
 * _realloc - Reallocs a blk of memo previously alloctd with malloc or calloc.
 *
 * @ptr: A pointer to the memory block to reallocate.
 * @old_size: The size of the previously-allocated block.
 * @new_size: The size of the new block.
 *
 * Return: A pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /* MAIN_H */

