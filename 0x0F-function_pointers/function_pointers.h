#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
 * print_name - prints a name using the provided function
 * @name: name to print
 * @f: pointer to a function that takes a char* argument and returns void
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - iterates over an array and applies the provided function to each element
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @action: pointer to a function that takes an int argument and returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - searches for an integer in an array using the provided function to compare values
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @cmp: pointer to a function that takes an int argument and returns an int
 *       (should return 0 if the values match, otherwise non-zero)
 * Return: the index of the first element in the array for which the cmp function does not return 0,
 *         or -1 if no such element is found
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */

