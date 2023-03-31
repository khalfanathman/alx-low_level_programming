#include <stdio.h>
/**
 * myConstructor - Function executed before main function
 *
 * Description: This function is executed before the main function.
 * It prints the message
 * Return: void
 */
void myConstructor(void) __attribute__ ((constructor));

void myConstructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
