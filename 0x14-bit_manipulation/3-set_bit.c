#include <stdio.h>
/**
 * set_bit - sets the value of a bit at a given index
 * @n: pointer to the unsigned long int to be modified
 * @index: index of the bit to be set
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    int newint;
    if (index >= sizeof(unsigned long int) * 32)
		return (-1);
    *n |= 1UL << index;
    newint = *n;
return (newint);
}