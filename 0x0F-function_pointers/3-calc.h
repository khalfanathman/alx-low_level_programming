#ifndef _CALC_H
#define _CALC_H

#include <stddef.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
/**
 * op_add - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the addition
 */
int op_add(int a, int b);

/**
 * op_sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the subtraction
 */
int op_sub(int a, int b);

/**
 * op_mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the multiplication
 */
int op_mul(int a, int b);

/**
 * op_div - Divides two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the division
 */
int op_div(int a, int b);

/**
 * op_mod - Calculates the remainder of the division of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Remainder of the division
 */
int op_mod(int a, int b);
/**
 * get_op_func - Selects the correct function to perform the
 * corresponding operation requested by the user.
 * @s: The operator passed as argument to the program
 *
 * Return: A pointer to the corresponding function or NULL
 * if the operator is not valid
 */
int (*get_op_func(char *s))(int, int);
#endif

