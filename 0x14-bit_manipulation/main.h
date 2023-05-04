#ifndef MAIN_H_
#define MAIN_H_

#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: length of string
 */
size_t _strlen(const char *s);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if b contains chars other than 0 and 1
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n);

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 1, on error -1.
 */
int _putchar(char c);

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check the bit in
 * @index: index of the bit to retrieve
 *
 * Return: value of the bit at index, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index);

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to modify
 * @index: index of the bit to set
 *
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index);

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to modify
 * @index: index of the bit to clear
 *
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index);

/**
 * flip_bits - returns the number of bits needed to flip to get from n to m
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
