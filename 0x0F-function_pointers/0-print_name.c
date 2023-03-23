#include "function_pointers.h"

/**
 * print_name - prints a name using the provided function
 * @name: name to print
 * @f: pointer to a function that takes a char* argument and returns void
 */
void print_name(char *name, void (*f)(char *))
{
	/* Call the provided function with the given name argument */
	if (name != NULL && f != NULL)
		f(name);
}

